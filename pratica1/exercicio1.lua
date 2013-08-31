-- exercicio1.lua
--
-- Linguagens de Prgramacao - UFRJ
-- Hugo F S Sadok Menna Barreto

function criarListaNome(arquivo)
	local lista = {}
	local i = 1
	for v in io.lines(arquivo) do
		if i%2 == 1 then
			nome = v
		else
			lista[nome] = v
		end
		i = i + 1
	end
	return lista
end

arquivo = "arquivo.txt"
lista = criarListaNome(arquivo)
for k, v in pairs(lista) do
	print (k,v)
end
