-- Lista2.lua
--
-- Linguagens de Prgramacao - UFRJ
-- Hugo F S Sadok Menna Barreto

NUMERO_DADOS_ALEATORIOS = 10
NUMERO_MAXIMO_ALEATORIO = 100
NOME_ARQUIVO_NUMEROS_ALEATORIOS = "random.txt"


function distPontos (ponto1, ponto2)
	local sum = 0
	for i, v in ipairs(ponto1) do
		sum = sum + ((v or 0) - (ponto2[i] or 0))^2
	end

	return sum^(0.5)
end

function escreverVetorArquivo (vetor, arquivo)
	local file = assert(io.open(arquivo, "w"), "Problemas ao abrir o arquivo para escrita, verifique as permissoes do arquivo")
	for i, v in ipairs(vetor) do
		file:write(v,"\n")
	end
	file:close()
end

function lerArquivoParaVetor(arquivo)
	local lista = {}
	local i = 1
	for v in io.lines(arquivo) do
		lista[i] = v
		i = i + 1
	end
	return lista
end


-- Para as funcoes de lista usaremos elementos com campos valor proximo e anterior
function inserirElementoInicioLista(lista, elemento)
	if lista ~= nil then
		lista.anterior = elemento
		elemento.proximo = lista
	end
	return elemento
end

function buscarElementoLista(lista, valorElemento) --retorna o elemento
	while lista ~= nil do
		if valorElemento == tonumber(lista.valor) then
			return lista
		end
		lista = lista.proximo
	end

	return nil
end

function removerElementoLista(elemento)
	if elemento.anterior ~= nil then
		elemento.anterior.proximo = elemento.proximo
	end
	if elemento.proximo ~= nil then
		elemento.proximo.anterior = elemento.anterior
	end
end

function imprimirLista(lista)
	while lista ~= nil do
		print(lista.valor)
		lista = lista.proximo
	end
end


print("Distancia entre 2 pontos")
print (distPontos({1,1,1}, {}),"\n")

---------------------------------------------

print("Escrever numeros aleatorios em um arquivo")
local listaDeNumerosAleatorios = {}
math.randomseed(os.time()) --usando o tempo como o seed para o gerador de numeros aleatorios
for i=1 ,NUMERO_DADOS_ALEATORIOS do
	listaDeNumerosAleatorios[i] = math.random(NUMERO_MAXIMO_ALEATORIO)
end
escreverVetorArquivo(listaDeNumerosAleatorios, NOME_ARQUIVO_NUMEROS_ALEATORIOS)

print("Lendo esses numeros")
listaDeNumerosAleatorios = {} --Esvaziando a lista, teremos certeza que ela foi lida do arquivo
listaDeNumerosAleatorios = lerArquivoParaVetor(NOME_ARQUIVO_NUMEROS_ALEATORIOS)
for i, v in ipairs(listaDeNumerosAleatorios) do
	print(v)
end

------------------------------------------------
-- para testar as funcoes de lista podemos colocar esses valores lidos do arquivo em uma lista
print("\nTestando listas")

print("Inserindo elementos no inicio da lista")
for i, v in ipairs(listaDeNumerosAleatorios) do
	lista = inserirElementoInicioLista(lista, {valor=v, proximo=nil, anterior=nil})
end
imprimirLista(lista)


print("Escolha o numero para procurar")
numeroBuscado = io.read("*number")
print((buscarElementoLista(lista, numeroBuscado) and "Encontrou") or "Nao encontrou")

------------------------------------------------

print ("\nTestes da aula 2")
a = "Hugo"
b = "Menna Barreto"
c = a.." "..b --> concatena strings
print(c)
io.write(a," ",b,"\n") --> mais eficiente do que concatenar para depois imprimir
-- perceba que o io.write permite maior controle sobre o que eh imprimido
