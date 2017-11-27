
           var figure = document.getElementById('figure1');
           


           function moveFigure(){
            var random = Math.floor((Math.random() * 14) + 1);
            var field = document.getElementById('no'+ random);
            field.appendChild(figure);

            var rectField = field.getBoundingClientRect();
            console.log(rectField.top, rectField.right, rectField.bottom, rectField.left);

            var rectFigure = figure.getBoundingClientRect();
            console.log(rectFigure.top, rectFigure.right, rectFigure.bottom, rectFigure.left);

            //    figure.style.transform = 'translate(' + rectField.left +'px,'+ rectField.top +'px'+ ')';
            //    figure.style.right =  rectField.right + 'px';
            //    figure.style.bottom = rectField.bottom + 'px';
            //    figure.style.left =  rectField.left + 'px';
                
           }
           
        

