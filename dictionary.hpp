/*
 * dictionary.hpp
 *
 *  Created on: Nov 21, 2014
 *      Author: Oleg Strelnikov
 */

#ifndef DICTIONARY_HPP_
#define DICTIONARY_HPP_

#include <map>

namespace reet {

template <typename Key, typename Data, typename Map = std::map<Key, Data> > class Dictionary {
	typedef Key key_type;
	typedef Data data_type;
	typedef Map map_type;
public:
	Dictionary(map_type const& dictionary, data_type const& notFound) : dictionary_(dictionary), notFound_(notFound) {}
	data_type const& get(key_type const& key) const {
		return (dictionary_.find(key) != dictionary_.end() ? dictionary_.at(key) : notFound_);
	}
private:
	const map_type dictionary_;
	const data_type notFound_;
}; //class Dictionary

} //namespace reet

#endif /* DICTIONARY_HPP_ */
