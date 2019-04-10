/*
    File:    lynx_lexeme.h
    Created: 09 February 2019 at 11:41 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/
#ifndef LYNX_LEXEME_H
#define LYNX_LEXEME_H
#include <cstddef>
#include <quadmath.h>
namespace lynx_scanner{
    enum class Lexem_code : uint16_t{
        Nothing,      UnknownLexem,     Kw_bezzn,
        Kw_bezzn8,    Kw_bezzn16,       Kw_bezzn32,
        Kw_bezzn64,   Kw_bezzn128,      Kw_bolshoe,
		Kw_delet,     Kw_vechno,        Kw_veshch,
        Kw_veshch32,  Kw_veshch64,      Kw_veshch80,
		Kw_veshch128, Kw_vozvrat,       Kw_vyberi,
        Kw_vydelenie, Kw_vyjdi,         Kw_golovnaya,
		Kw_dlya,      Kw_esli,          Kw_inache,   
		Kw_ines,      Kw_istina,        Kw_kompl,  
		Kw_kompl32,   Kw_kompl64,       Kw_kompl80,       
		Kw_kompl128,  Kw_konst,         Kw_log,   
		Kw_log8,      Kw_log16,         Kw_log32, 
        Kw_log64,     Kw_lozh,          Kw_malenkoe,
		Kw_massiv,    Kw_max,           Kw_min,
		Kw_modul, 	  Kw_nichto,        Kw_osvobozhdenie,
        Kw_perem,     Kw_perechislenie, Kw_povtoryaj,
        Kw_poka,      Kw_pokuda,        Kw_razbor,
		Kw_random,    Kw_simv,          Kw_stroka, 
		Kw_struktura, Kw_ssylka,        Kw_tip,     
		Kw_to,        Kw_timeon,        Kw_timeoff
		Kw_funktsiya, Kw_chistaya,      Kw_tsel, 
		Kw_tsel8,     Kw_tsel16,        Kw_tsel32,
        Kw_tsel64,    Kw_tsel128,       Id,
        Integer,      Float32,          Float64,
        Float80,      Float128,         Complex32,
        Complex64,    Complex80,        Complex128,
        String,       Char
    };

    struct Lexeme_info{
        Lexem_code code_;
        union{
            unsigned __int128 int_val_;
            __float128        float_val_;
            __complex128      complex_val_;
            char32_t          char_val_;
            std::size_t       str_index_;
            std::size_t       id_index_;
        };
    };
};
#endif