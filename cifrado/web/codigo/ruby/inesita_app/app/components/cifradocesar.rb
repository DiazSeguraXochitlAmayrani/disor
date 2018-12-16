class CifradoCesar
    include Inesita::Component

    def texto()
      store.cifrarTexto(store.obtenerDezplazamiento.to_i,store.get_texto)
    end

    def cambiarvalor(e)
      store.setDezplazamieto(e.target.value);
      texto()
      render!
    end  
    
    def desplazamiento
      store.obtenerDezplazamiento
    end

    def render
      div class: 'col-md-15 offset-md-3 margenUp row' do
        text "Cifrado César"
      end
      br
      div class: 'col-md-15 row' do
        label class: 'col-md-8.1' do
          text "Desplazamiento: "
        end
        input.form_control type: "number",onclick: method(:cambiarvalor), class: 'col-md-4',value: desplazamiento,min: 0
      end
      br
      textarea class: 'col-md-12',onchange: method(:texto),value: texto do
      end
    end

end