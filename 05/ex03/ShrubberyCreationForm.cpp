/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:50:10 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/17 15:52:45 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called 🌳" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        _target = other._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor); 

    std::ofstream file((_target + "_shrubbery").c_str());
    file << R"(
           ,
          / \
        .'   '.
       /       \
      /.-.   .-.\
      `/  '.'   \`
     .'          '.
    /.--.     .--.\
    `/   '. .'    \`
   .'      `       '.
  /.---.       .----.\
  `/    `.   .'     \`
 .'       `.'        '.
/,----,          ,----,\
`'-.__.;-,____,-;.__.-'
         |||||
         |||||
         `"""`
         
         / / /
       /        /  /     //    /
    /                 /         /  /
                    /
                   /                //
   /          /            /              /
   /            '/,        /               /
   /              'b      *
    /              '$    //                //
   /    /           $:   /:               /
 //      /  //      */  @):        /   / /
              /     :@,@):   ,/**:'   /
  /      /,         :@@*: //**'      /   /
           '/o/    /:(@'/@*"'  /
   /  /       'bq,//:,@@*'   ,*      /  /
              ,p$q8,:@)'  /p*'      /
       /     '  / '@@Pp@@*'    /  /
        /  / //    Y7'.'     /  /
                  :@):.
                 .:@:'.
               .::(@:.     

             _{\ _{\{\/}/}/}__
            {/{/\}{/{/\}(\}{/\} _
           {/{/\}{/{/\}(_)\}{/{/\}  _
        {\{/(\}\}{/{/\}\}{/){/\}\} /\}
       {/{/(_)/}{\{/)\}{\(_){/}/}/}/}
      _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}
     {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}
     _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}
    {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}
     {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}
      {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)
     {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}
      {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}
        {/({/{\{/{\{\/}(_){\/}/}\}/}(\}
         (_){/{\/}{\{\/}/}{\{\)/}/}(_)
           {/{/{\{\/}{/{\{\{\(_)/}
            {/{\{\{\/}/}{\{\\}/}
             {){/ {\/}{\/} \}\}
             (_)  \.-'.-/
         __...--- |'-.-'| --...__
  _...--"   .-'   |'-.-'|  ' -.  ""--..__
-"    ' .  . '    |.'-._| '  . .  '   
.  '-  '    .--'  | '-.'|    .  '  . '
         ' ..     |'-_.-|
 .  '  .       _.-|-._ -|-._  .  '  .
             .'   |'- .-|   '.
 ..-'   ' .  '.   `-._.-´   .'  '  - .
  .-' '        '-._______.-'     '  .
       .      ~,
   .       .   |\   .    ' '-.
   ___________/  \____________
  /  Why is it, when you want \
 |  something, it is so damn   |
 |    much work to get it?     |
  \___________________________/
)";
}
