const boton = document.getElementById('btnCalcular');
const limites = document.querySelectorAll('.inputLimite');
const opciones = document.getElementById('opcionesMetodos');

import { MetodoBiseccion } from "./metodoBiseccion.js";

boton.addEventListener('click',()=>{
    const ecuacion = document.getElementById('input').value;
    switch(opciones.value){
        case 'Biseccion': 
            console.log(MetodoBiseccion(limites[0].value,limites[1].value,ecuacion));
        break
    }
});
