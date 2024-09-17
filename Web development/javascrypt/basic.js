let todo=[];
req=prompt("please enter your request");
while (true) {
    if(req=="quit"){
        console.log("quiting app");
        break;
    }
    if(req=="list"){
        for ( rahul of todo) {
            console.log(rahul);
        }
    }
    if(req=="add"){
        let task=prompt("please enter the task you want to add");
        todo.push(task);
        console.log("task added");
    }
    if(req=="del"){
        let ind=prompt("enter index you have to delete");
        todo.splice(ind,1);
        console.log("task deleted");
    }
    req=prompt("please enter your request");
}