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


