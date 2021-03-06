/****
DIAMOND protein aligner
Copyright (C) 2013-2018 Benjamin Buchfink <buchfink@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
****/

#ifndef TAXON_LIST_H_
#define TAXON_LIST_H_

#include "../util/io/output_file.h"
#include "../util/io/file_backed_buffer.h"
#include "../util/data_structures/compact_array.h"

struct TaxonList : public CompactArray<vector<unsigned> >
{
	TaxonList(Deserializer &in, size_t size, size_t data_size);
	static void build(OutputFile &db, FileBackedBuffer &accessions, size_t seqs);
};

#endif