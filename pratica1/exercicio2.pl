#!/usr/bin/env perl
#
# exercicio2.pl
# Linguagens de Prgramacao - UFRJ
# Hugo F S Sadok Menna Barreto

use strict;
use warnings;

sub criarListaNome{
	my $arquivo = shift;
	open (my $in, "<", $arquivo) or die "Nao pode abrir arquivo, erro: $!\n";
	my $i = 1;
	my %lista;
	my $nome;
	while(<$in>){
		if ($i % 2 == 1){
			$nome = $_;
		}
		else{
			%lista = (%lista,$nome => $_);
		}
		$i++;
	}
	close $in or die "$in: $!";
	return %lista;
}


my $arquivo = "arquivo.txt";
my %lista = criarListaNome($arquivo);
print (%lista);
