using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CifradosGenerico.Cifrados;

namespace CifradosGenerico
{
    class Gestor
    {
        public Cesar cesar;
        public Reversa reverse;
        public ReversaAgrup reverseG;
        

        public Gestor()
        {
            cesar = new Cesar();
            reverse = new Reversa();
            reverseG = new ReversaAgrup();
        }
        public void cifrar( String pala )
        {
            cesar.palabra = pala;
            reverse.palabra = pala;
            reverseG.palabra = pala;

            cesar.Cifrar();
            reverse.Cifrar();
            reverseG.Cifrar();
        }
        public void cifrarSinActualizacion()
        {
            cesar.Cifrar();
            reverse.Cifrar();
            reverseG.Cifrar();
        }
    }
}
