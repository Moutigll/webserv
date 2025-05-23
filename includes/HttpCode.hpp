/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HttpCode.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 03:33:37 by ele-lean          #+#    #+#             */
/*   Updated: 2025/05/20 15:33:28 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTTPCODE_HPP
# define HTTPCODE_HPP

# include <string>
# include <map>

class HttpCode
{
public:
	HttpCode();
	HttpCode(int code);
	HttpCode(const HttpCode &src);
	HttpCode &operator=(const HttpCode &src);
	~HttpCode();

	std::string		getMessage(int code) const;
	int				getCode() const { return _code; }
private:
	int	_code;

	static std::map<int, std::string>	_initHttpCodes();
	static std::map<int, std::string>	_httpCodes;
};

#endif
