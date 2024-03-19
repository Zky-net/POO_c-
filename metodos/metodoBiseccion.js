function puntoMedio(limiteInferior,limiteSuperior){
    return (limiteInferior+limiteSuperior)/2
}
function evaluarEcuacion(ecuacion, valor){
    const regex = /x/ig;
    ecuacion = ecuacion.replace(regex,valor);
    console.log(ecuacion);
}

export const MetodoBiseccion = (limiteInferior,limiteSuperior, ecuacion)=>{
    console.log(typeof ecuacion);
    const valorMedio = puntoMedio(limiteInferior,limiteSuperior);
    evaluarEcuacion(ecuacion,limiteInferior);
    evaluarEcuacion(ecuacion,valorMedio);
}