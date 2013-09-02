#!/usr/bin/env perl
#
# exercicio4.pl
# Linguagens de Prgramacao - UFRJ
# Hugo F S Sadok Menna Barreto

use strict;
use warnings;

sub obterNumeroLinhas{
	return scalar split("\n",$_[0]);
}

sub obterNumeroPalavras{
	return scalar split(" ",$_[0]);
}

# obterNumeroCaracteres texto, excessao1, excessao2, ...
# Retorna o numero de caracteres em texto diferentes dos caracteres nas excessoes
sub obterNumeroCaracteres{
	my $texto = shift;
	foreach(@_){
		$texto =~ s/$_//g;
	}
	return length $texto ;
}

my $arquivoTeste = "teste4.txt";

open (my $arquivo, "<", $arquivoTeste) or die "Nao pode abrir o arquivo $arquivoTeste: $!\n";
my $conteudo = "";
while (<$arquivo>) {
	$conteudo = $conteudo . $_;
}
close $arquivo or die "$!\n";

print "Conteudo do arquivo: \"$conteudo\"\n";
print "Numero de linhas: ", obterNumeroLinhas($conteudo), "\n";
print "Numero de palavras: ", obterNumeroPalavras($conteudo), "\n";
print "Numero de caracteres: ", obterNumeroCaracteres($conteudo), "\n";
print "Numero de caracteres sem espaço: ", obterNumeroCaracteres($conteudo, " "), "\n";
