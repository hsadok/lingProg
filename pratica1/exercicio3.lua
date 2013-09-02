-- exercicio3.lua
--
-- Linguagens de Prgramacao - UFRJ
-- Hugo F S Sadok Menna Barreto

NUMERO_DADOS_ALEATORIOS = 100

function quickSort(array, ini, fim)
	local i, j = ini, fim
	local pivot = array[math.floor((fim+ini)/2)]
	while i <= j do
		while array[i] < pivot do
			i = i + 1
		end
		while array[j] > pivot do
			j = j -1
		end
		if i <= j then
			array[i], array[j] = array[j], array[i]
			i = i + 1
			j = j - 1
		end
	end
	if j > ini then quickSort(array, ini, j) end
	if i < fim then quickSort(array, i, fim) end
end

local listaDeNumerosAleatorios = {}

math.randomseed(os.time())
for i=1, NUMERO_DADOS_ALEATORIOS do
	listaDeNumerosAleatorios[i] = math.random(2000)
end

quickSort(listaDeNumerosAleatorios, 1, NUMERO_DADOS_ALEATORIOS)

for k, v in pairs(listaDeNumerosAleatorios) do
	io.write(v, "  ")
end
print()
