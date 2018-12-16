var listado, estado, activos, tiempo, entidades, generacion, interv = 0, cuenta = 0, auto = false;
var dim = {
  ancho: 10,
  alto: 10
};

function generarEntes() {
  tabla = document.getElementById('entes');
  tabla.innerHTML = '';
  estado = [];
  //console.log(tabla);
  dim.ancho = parseInt(document.getElementById('ancho').value);
  dim.alto = parseInt(document.getElementById('alto').value);
  for(var i=0; i<dim.alto; i++) {
    var linea = document.createElement('tr');
    estado[i] = [];
    //console.log(linea)
    for(var j=0; j<dim.ancho; j++) {
      estado[i][j] = false;
      var col = document.createElement('td');
      //var ente = document.createElement('input');
      //ente.type = 'checkbox';
      col.className = '';
      col.onclick = function() {
        this.className = this.className == 'vivo' ? '' : 'vivo';
      };
      //col.appendChild(ente);
      //console.log(col);
      linea.appendChild(col);
    }
    tabla.appendChild(linea);
  }
  listado = document.getElementsByTagName('td');
  tiempo = document.getElementById('tiempo');
  entidades = document.getElementById('entidades');
  generacion = document.getElementById('generaciones');
  cuenta = 0;
}

function pasoAuto() {
  if(auto){
    cancelAnimationFrame(interv);
    document.getElementById('automat').value = 'turno aleatorio';
  } else {
    interv = requestAnimationFrame(pasoAdelante);
    document.getElementById('automat').value = 'quitar turno aleatorio';
  }
  auto = !auto;
}

function llenadoRandom() {
  for(var i=0; i<listado.length; i++) {
    listado[i].className = Math.random() > 0.7 ? 'vivo' : '';
  }
  cuenta = 0;
}

function pasoAdelante() {
  //console.time('Un paso');
  var i,j,
    este,
    inicio = new Date().getTime();
  
  activos = 0;
  
  for(i=0; i<dim.alto; i++) {
    for(j=0; j<dim.ancho; j++) {
      este = (listado[dim.ancho*i+j].className == 'vivo');
      estado[i][j] = este;
      if(este) activos++;
    }
  }
  
  if(activos == 0) {
    console.log('No hay celulas vivas');
    cuenta = 0;
    document.getElementById('automat').value = 'turno aleatorio';
    //console.timeEnd('Un paso');
    return;
  }
  
  var n, k, p, q,
    r = [[-1,-1],[0,-1],[1,-1],[-1,0],[1,0],[-1,1],[0,1],[1,1]];
  
  for(i=0; i<dim.alto; i++) {
    for(j=0; j<dim.ancho; j++) {
      n = 0;
      k = r.length;
      while(k--) {
        p = i+r[k][0];
        q = j+r[k][1];
        
        if(p<0 || q<0 || p==dim.alto || q==dim.ancho)
          continue;
          
        if(estado[p][q])
          n++;
      }
      este = estado[i][j];
      
      // Reglas del juego
      if(!este && n == 3)
        listado[dim.ancho*i+j].className = 'vivo';
      else if(este && (n == 3 || n == 2))
        listado[dim.ancho*i+j].className = 'vivo';
      else
        listado[dim.ancho*i+j].className = '';
    }
  }
  
  //console.timeEnd('Un paso');
  tiempo.innerText = new Date().getTime() - inicio;
  entidades.innerText = activos;
  generacion.innerText = cuenta++;
  
  interv = requestAnimationFrame(pasoAdelante);
}