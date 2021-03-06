// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "library.hxx"

namespace library
{
  // isbn
  // 


  // title
  // 

  const title::lang_optional& title::
  lang () const
  {
    return this->lang_;
  }

  title::lang_optional& title::
  lang ()
  {
    return this->lang_;
  }

  void title::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void title::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void title::
  lang (::std::auto_ptr< lang_type > x)
  {
    this->lang_.set (x);
  }


  // genre
  // 

  genre::
  genre (value v)
  : ::xml_schema::string (_xsd_genre_literals_[v])
  {
  }

  genre::
  genre (const char* v)
  : ::xml_schema::string (v)
  {
  }

  genre::
  genre (const ::std::string& v)
  : ::xml_schema::string (v)
  {
  }

  genre::
  genre (const ::xml_schema::string& v)
  : ::xml_schema::string (v)
  {
  }

  genre::
  genre (const genre& v,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (v, f, c)
  {
  }

  genre& genre::
  operator= (value v)
  {
    static_cast< ::xml_schema::string& > (*this) = 
    ::xml_schema::string (_xsd_genre_literals_[v]);

    return *this;
  }


  // person
  // 

  const person::name_type& person::
  name () const
  {
    return this->name_.get ();
  }

  person::name_type& person::
  name ()
  {
    return this->name_.get ();
  }

  void person::
  name (const name_type& x)
  {
    this->name_.set (x);
  }

  void person::
  name (::std::auto_ptr< name_type > x)
  {
    this->name_.set (x);
  }

  const person::born_type& person::
  born () const
  {
    return this->born_.get ();
  }

  person::born_type& person::
  born ()
  {
    return this->born_.get ();
  }

  void person::
  born (const born_type& x)
  {
    this->born_.set (x);
  }

  void person::
  born (::std::auto_ptr< born_type > x)
  {
    this->born_.set (x);
  }

  const person::died_optional& person::
  died () const
  {
    return this->died_;
  }

  person::died_optional& person::
  died ()
  {
    return this->died_;
  }

  void person::
  died (const died_type& x)
  {
    this->died_.set (x);
  }

  void person::
  died (const died_optional& x)
  {
    this->died_ = x;
  }

  void person::
  died (::std::auto_ptr< died_type > x)
  {
    this->died_.set (x);
  }


  // author
  // 

  const author::recommends_optional& author::
  recommends () const
  {
    return this->recommends_;
  }

  author::recommends_optional& author::
  recommends ()
  {
    return this->recommends_;
  }

  void author::
  recommends (const recommends_type& x)
  {
    this->recommends_.set (x);
  }

  void author::
  recommends (const recommends_optional& x)
  {
    this->recommends_ = x;
  }

  void author::
  recommends (::std::auto_ptr< recommends_type > x)
  {
    this->recommends_.set (x);
  }


  // book
  // 

  const book::isbn_type& book::
  isbn () const
  {
    return this->isbn_.get ();
  }

  book::isbn_type& book::
  isbn ()
  {
    return this->isbn_.get ();
  }

  void book::
  isbn (const isbn_type& x)
  {
    this->isbn_.set (x);
  }

  void book::
  isbn (::std::auto_ptr< isbn_type > x)
  {
    this->isbn_.set (x);
  }

  const book::title_type& book::
  title () const
  {
    return this->title_.get ();
  }

  book::title_type& book::
  title ()
  {
    return this->title_.get ();
  }

  void book::
  title (const title_type& x)
  {
    this->title_.set (x);
  }

  void book::
  title (::std::auto_ptr< title_type > x)
  {
    this->title_.set (x);
  }

  const book::genre_type& book::
  genre () const
  {
    return this->genre_.get ();
  }

  book::genre_type& book::
  genre ()
  {
    return this->genre_.get ();
  }

  void book::
  genre (const genre_type& x)
  {
    this->genre_.set (x);
  }

  void book::
  genre (::std::auto_ptr< genre_type > x)
  {
    this->genre_.set (x);
  }

  const book::author_sequence& book::
  author () const
  {
    return this->author_;
  }

  book::author_sequence& book::
  author ()
  {
    return this->author_;
  }

  void book::
  author (const author_sequence& s)
  {
    this->author_ = s;
  }

  const book::available_type& book::
  available () const
  {
    return this->available_.get ();
  }

  book::available_type& book::
  available ()
  {
    return this->available_.get ();
  }

  void book::
  available (const available_type& x)
  {
    this->available_.set (x);
  }

  book::available_type book::
  available_default_value ()
  {
    return available_type (true);
  }

  const book::id_type& book::
  id () const
  {
    return this->id_.get ();
  }

  book::id_type& book::
  id ()
  {
    return this->id_.get ();
  }

  void book::
  id (const id_type& x)
  {
    this->id_.set (x);
  }

  void book::
  id (::std::auto_ptr< id_type > x)
  {
    this->id_.set (x);
  }


  // catalog
  // 

  const catalog::book_sequence& catalog::
  book () const
  {
    return this->book_;
  }

  catalog::book_sequence& catalog::
  book ()
  {
    return this->book_;
  }

  void catalog::
  book (const book_sequence& s)
  {
    this->book_ = s;
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace library
{
  // isbn
  //

  isbn::
  isbn (const ::xml_schema::unsigned_int& _xsd_unsigned_int_base)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type > (_xsd_unsigned_int_base)
  {
  }

  isbn::
  isbn (const isbn& x,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type > (x, f, c)
  {
  }

  isbn::
  isbn (const ::xercesc::DOMElement& e,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type > (e, f, c)
  {
  }

  isbn::
  isbn (const ::xercesc::DOMAttr& a,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type > (a, f, c)
  {
  }

  isbn::
  isbn (const ::std::string& s,
        const ::xercesc::DOMElement* e,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type > (s, e, f, c)
  {
  }

  isbn* isbn::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class isbn (*this, f, c);
  }

  isbn::
  ~isbn ()
  {
  }

  // title
  //

  title::
  title ()
  : ::xml_schema::string (),
    lang_ (this)
  {
  }

  title::
  title (const char* _xsd_string_base)
  : ::xml_schema::string (_xsd_string_base),
    lang_ (this)
  {
  }

  title::
  title (const ::std::string& _xsd_string_base)
  : ::xml_schema::string (_xsd_string_base),
    lang_ (this)
  {
  }

  title::
  title (const ::xml_schema::string& _xsd_string_base)
  : ::xml_schema::string (_xsd_string_base),
    lang_ (this)
  {
  }

  title::
  title (const title& x,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (x, f, c),
    lang_ (x.lang_, f, this)
  {
  }

  title::
  title (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (e, f | ::xml_schema::flags::base, c),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, false, false, true);
      this->parse (p, f);
    }
  }

  void title::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "lang" && n.namespace_ ().empty ())
      {
        this->lang_.set (lang_traits::create (i, f, this));
        continue;
      }
    }
  }

  title* title::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class title (*this, f, c);
  }

  title& title::
  operator= (const title& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::string& > (*this) = x;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  title::
  ~title ()
  {
  }

  // genre
  //

  genre::
  genre (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (e, f, c)
  {
    _xsd_genre_convert ();
  }

  genre::
  genre (const ::xercesc::DOMAttr& a,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (a, f, c)
  {
    _xsd_genre_convert ();
  }

  genre::
  genre (const ::std::string& s,
         const ::xercesc::DOMElement* e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xml_schema::string (s, e, f, c)
  {
    _xsd_genre_convert ();
  }

  genre* genre::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class genre (*this, f, c);
  }

  genre::value genre::
  _xsd_genre_convert () const
  {
    ::xsd::cxx::tree::enum_comparator< char > c (_xsd_genre_literals_);
    const value* i (::std::lower_bound (
                      _xsd_genre_indexes_,
                      _xsd_genre_indexes_ + 5,
                      *this,
                      c));

    if (i == _xsd_genre_indexes_ + 5 || _xsd_genre_literals_[*i] != *this)
    {
      throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
    }

    return *i;
  }

  const char* const genre::
  _xsd_genre_literals_[5] =
  {
    "romance",
    "fiction",
    "horror",
    "history",
    "philosophy"
  };

  const genre::value genre::
  _xsd_genre_indexes_[5] =
  {
    ::library::genre::fiction,
    ::library::genre::history,
    ::library::genre::horror,
    ::library::genre::philosophy,
    ::library::genre::romance
  };

  // person
  //

  person::
  person (const name_type& name,
          const born_type& born)
  : ::xml_schema::type (),
    name_ (name, this),
    born_ (born, this),
    died_ (this)
  {
  }

  person::
  person (const person& x,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    name_ (x.name_, f, this),
    born_ (x.born_, f, this),
    died_ (x.died_, f, this)
  {
  }

  person::
  person (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    name_ (this),
    born_ (this),
    died_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void person::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // name
      //
      if (n.name () == "name" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< name_type > r (
          name_traits::create (i, f, this));

        if (!name_.present ())
        {
          this->name_.set (r);
          continue;
        }
      }

      // born
      //
      if (n.name () == "born" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< born_type > r (
          born_traits::create (i, f, this));

        if (!born_.present ())
        {
          this->born_.set (r);
          continue;
        }
      }

      // died
      //
      if (n.name () == "died" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< died_type > r (
          died_traits::create (i, f, this));

        if (!this->died_)
        {
          this->died_.set (r);
          continue;
        }
      }

      break;
    }

    if (!name_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "name",
        "");
    }

    if (!born_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "born",
        "");
    }
  }

  person* person::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class person (*this, f, c);
  }

  person& person::
  operator= (const person& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->name_ = x.name_;
      this->born_ = x.born_;
      this->died_ = x.died_;
    }

    return *this;
  }

  person::
  ~person ()
  {
  }

  // author
  //

  author::
  author (const name_type& name,
          const born_type& born)
  : ::library::person (name,
                       born),
    recommends_ (this)
  {
  }

  author::
  author (const author& x,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
  : ::library::person (x, f, c),
    recommends_ (x.recommends_, f, this)
  {
  }

  author::
  author (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
  : ::library::person (e, f | ::xml_schema::flags::base, c),
    recommends_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
      this->parse (p, f);
    }
  }

  void author::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    this->::library::person::parse (p, f);

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "recommends" && n.namespace_ ().empty ())
      {
        this->recommends_.set (recommends_traits::create (i, f, this));
        continue;
      }
    }
  }

  author* author::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class author (*this, f, c);
  }

  author& author::
  operator= (const author& x)
  {
    if (this != &x)
    {
      static_cast< ::library::person& > (*this) = x;
      this->recommends_ = x.recommends_;
    }

    return *this;
  }

  author::
  ~author ()
  {
  }

  // book
  //

  book::
  book (const isbn_type& isbn,
        const title_type& title,
        const genre_type& genre,
        const id_type& id)
  : ::xml_schema::type (),
    isbn_ (isbn, this),
    title_ (title, this),
    genre_ (genre, this),
    author_ (this),
    available_ (available_default_value (), this),
    id_ (id, this)
  {
  }

  book::
  book (const isbn_type& isbn,
        ::std::auto_ptr< title_type > title,
        const genre_type& genre,
        const id_type& id)
  : ::xml_schema::type (),
    isbn_ (isbn, this),
    title_ (title, this),
    genre_ (genre, this),
    author_ (this),
    available_ (available_default_value (), this),
    id_ (id, this)
  {
  }

  book::
  book (const book& x,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    isbn_ (x.isbn_, f, this),
    title_ (x.title_, f, this),
    genre_ (x.genre_, f, this),
    author_ (x.author_, f, this),
    available_ (x.available_, f, this),
    id_ (x.id_, f, this)
  {
  }

  book::
  book (const ::xercesc::DOMElement& e,
        ::xml_schema::flags f,
        ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    isbn_ (this),
    title_ (this),
    genre_ (this),
    author_ (this),
    available_ (this),
    id_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
      this->parse (p, f);
    }
  }

  void book::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // isbn
      //
      if (n.name () == "isbn" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< isbn_type > r (
          isbn_traits::create (i, f, this));

        if (!isbn_.present ())
        {
          this->isbn_.set (r);
          continue;
        }
      }

      // title
      //
      if (n.name () == "title" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< title_type > r (
          title_traits::create (i, f, this));

        if (!title_.present ())
        {
          this->title_.set (r);
          continue;
        }
      }

      // genre
      //
      if (n.name () == "genre" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< genre_type > r (
          genre_traits::create (i, f, this));

        if (!genre_.present ())
        {
          this->genre_.set (r);
          continue;
        }
      }

      // author
      //
      if (n.name () == "author" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< author_type > r (
          author_traits::create (i, f, this));

        this->author_.push_back (r);
        continue;
      }

      break;
    }

    if (!isbn_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "isbn",
        "");
    }

    if (!title_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "title",
        "");
    }

    if (!genre_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "genre",
        "");
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "available" && n.namespace_ ().empty ())
      {
        this->available_.set (available_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "id" && n.namespace_ ().empty ())
      {
        this->id_.set (id_traits::create (i, f, this));
        continue;
      }
    }

    if (!available_.present ())
    {
      this->available_.set (available_default_value ());
    }

    if (!id_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "id",
        "");
    }
  }

  book* book::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class book (*this, f, c);
  }

  book& book::
  operator= (const book& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->isbn_ = x.isbn_;
      this->title_ = x.title_;
      this->genre_ = x.genre_;
      this->author_ = x.author_;
      this->available_ = x.available_;
      this->id_ = x.id_;
    }

    return *this;
  }

  book::
  ~book ()
  {
  }

  // catalog
  //

  catalog::
  catalog ()
  : ::xml_schema::type (),
    book_ (this)
  {
  }

  catalog::
  catalog (const catalog& x,
           ::xml_schema::flags f,
           ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    book_ (x.book_, f, this)
  {
  }

  catalog::
  catalog (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f,
           ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    book_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void catalog::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // book
      //
      if (n.name () == "book" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< book_type > r (
          book_traits::create (i, f, this));

        this->book_.push_back (r);
        continue;
      }

      break;
    }
  }

  catalog* catalog::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class catalog (*this, f, c);
  }

  catalog& catalog::
  operator= (const catalog& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->book_ = x.book_;
    }

    return *this;
  }

  catalog::
  ~catalog ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace library
{
  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& u,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& u,
            ::xml_schema::error_handler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& u,
            ::xercesc::DOMErrorHandler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::library::catalog_ (isrc, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xml_schema::error_handler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::library::catalog_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xercesc::DOMErrorHandler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::library::catalog_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& sid,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::library::catalog_ (isrc, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& sid,
            ::xml_schema::error_handler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::library::catalog_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& sid,
            ::xercesc::DOMErrorHandler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::library::catalog_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& i,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& i,
            ::xml_schema::error_handler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& i,
            ::xercesc::DOMErrorHandler& h,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::library::catalog > (
      ::library::catalog_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::xercesc::DOMDocument& doc,
            ::xml_schema::flags f,
            const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
        static_cast< ::xercesc::DOMDocument* > (doc.cloneNode (true)));

      return ::std::auto_ptr< ::library::catalog > (
        ::library::catalog_ (
          d, f | ::xml_schema::flags::own_dom, p));
    }

    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "catalog" &&
        n.namespace_ () == "http://www.codesynthesis.com/library")
    {
      ::std::auto_ptr< ::library::catalog > r (
        ::xsd::cxx::tree::traits< ::library::catalog, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "catalog",
      "http://www.codesynthesis.com/library");
  }

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
            ::xml_schema::flags f,
            const ::xml_schema::properties&)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
      ((f & ::xml_schema::flags::keep_dom) &&
       !(f & ::xml_schema::flags::own_dom))
      ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
      : 0);

    ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (f & ::xml_schema::flags::keep_dom)
      doc.setUserData (::xml_schema::dom::tree_node_key,
                       (c.get () ? &c : &d),
                       0);

    if (n.name () == "catalog" &&
        n.namespace_ () == "http://www.codesynthesis.com/library")
    {
      ::std::auto_ptr< ::library::catalog > r (
        ::xsd::cxx::tree::traits< ::library::catalog, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "catalog",
      "http://www.codesynthesis.com/library");
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

