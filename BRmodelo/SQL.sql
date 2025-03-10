-- Geração de Modelo físico
-- Sql ANSI 2003 - brModelo.



CREATE TABLE professor (
id_professor INTEGER PRIMARY KEY,
nome_professor VARCHAR(50),
formaçao VARCHAR(10)
)

CREATE TABLE disiciplina (
id_disciplina INTEGER PRIMARY KEY,
nome_disciplina VARCHAR(50),
carga_horaria VARCHAR(10),
id_disciplna Número(4),
id_curso INTEGER,
id_professor INTEGER,
FOREIGN KEY(id_professor) REFERENCES professor (id_professor)
)

CREATE TABLE matriculado (
id_disciplina INTEGER,
id_aluno INTEGER,
FOREIGN KEY(id_disciplina) REFERENCES disiciplina (id_disciplina)
)

CREATE TABLE curso (
id_curso INTEGER PRIMARY KEY,
nome_curso VARCHAR(50),
carga_horaria VARCHAR(10)
)

CREATE TABLE aluno  (
nome_aluno VARCHAR(50),
id_aluno INTEGER PRIMARY KEY,
id_curso INTEGER,
FOREIGN KEY(id_curso) REFERENCES curso (id_curso)
)

ALTER TABLE disiciplina ADD FOREIGN KEY(id_curso) REFERENCES curso (id_curso)
ALTER TABLE matriculado ADD FOREIGN KEY(id_aluno) REFERENCES aluno  (id_aluno)
