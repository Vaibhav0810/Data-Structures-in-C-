Q1 Diff bw == and ===

== -> it compares string/integer to integer and still give correct ans
eg let a =10
if(a=='10') return true // it returns true

=== -> it compares same type to same type
it will give false in above expression

--------------------------------------------------------------------------------------------------
Q2 If we neeed ending space too so what to do

document.getElementsById("abc").innerText=" Hey ";
it will ignore last space and cout Hey
if we want to have last space we can use .textContent


--------------------------------------------------------------------------------------------------
document.getElementById works same as document.querySelector("#id"); 
ye wide h querySelector isme class body kuch bhi daal skte h

--------------------------------------------------------------------------------------------------

in HTML  <button id="input-btn" onclick="saveLead()">

function saveLead(){
    console.log("clicked")
}

OR

in HTML  <button id="input-btn">

let inputBtn = document.getElementById("input-btn")

inputBtn.addEventListener("click", function(){
    console.log("clicked")
})

work same but syntax different

--------------------------------------------------------------------------------------------------

const is used when we dont want to reassig the variable 
for eg in blackjack game
const name = xyz
let chips = $21

chips can change but name wont

--------------------------------------------------------------------------------------------------

// Create Extension Code

// In this we see How to use html tags inside js 

let myLeads = []
const inputEl = document.getElementById("input-el")
const inputBtn = document.getElementById("input-btn")
const ulEl = document.getElementById("ul-el")

inputBtn.addEventListener("click", function() {
    myLeads.push(inputEl.value)
    renderLeads()
    inputEl.value=""
    myLeads=[]
})

// Let's try a different method!
// for (let i = 0; i < myLeads.length; i++) {
//    // ulEl.innerHTML += "<li>" + myLeads[i] + "</li>"
//    // alternate way

//    const li= document.createElement("li")
//    li.textContent=myLeads[i]
//    ulEl.append(li)

// }
 
// better way(faster)

// let listItems = ""

// for(let i=0;i<myLeads.length;i++){
//     listItems+= "<li>" + myLeads[i] + "</li>"
//     console.log(listItems) 
// }

// ulEl.innerHTML+= listItems 


// now coding so that we can get leads in input

function renderLeads(){
    let listItems = ""

    for(let i=0;i<myLeads.length;i++){
        listItems+=  "<li> <a target = '_blank' href= '" + myLeads[i] + "'>" + myLeads[i] + "</a></li>" 

    }

    ulEl.innerHTML+= listItems 

}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

