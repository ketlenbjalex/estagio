charset "UTF-8";

/* Typical Device Breakpoints

Pequenas telas: até 600px

Celular: de 600px até 768px 
Tablet: 768px até 992px
 Desktop: 992px até 1200px
 Grandes telas: acima de 1200px

*/
@media screen and (min-width: 768px) and (max-width: 992px) { 
    
    section#login {

    width: 80vw;
    
    }
    
    section#login > div#imagem {
    
    float: left;
    
    width: 30%;
    
    height: 100%;
    
    }
    
    section#login > div#formulario { 

    }
    
    float: right; width: 70%;
    
    }
    
    @media screen and (min-width: 992px) { 
        
        section#login {
    
    width: 950px;
       }
    float: left;
    
    section#login > div#imagem { height: 100%; }
    
    width: 50%;
    
    section#login > div#formulario {
    
    float: right; width: 50%;
    
        }  

