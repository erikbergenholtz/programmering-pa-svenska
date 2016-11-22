#define sant				true
#define falskt				false
#define sjalvbestammande	auto
#define bryt				break
#define fall				case
#define tecken			char
#define kostant				const
#define fortsatt			continue
#define standard			default
#define gor					do
#define dubbel				double
#define annars				else
#define raknare				enum
#define utifran				extern
#define flyttal				float
#define varje				for
#define gatill				goto
#define om					if
#define hel					int
#define lang				long
#define registrera			register
#define skickatillbaks		return
#define kort				short
#define signerad			signed
#define storlekav			sizeof
#define statisk				static
#define struktur			struct
#define byt					switch
#define typdefinition		typedef
#define sammansattning		union
#define osignerad			unsigned
#define tomrum				void
#define flyktig				volatile
#define medan				while 

/*
 * Sedan C++11
 */
#if __cplusplus >= 199711L
	#define justerasom alignas
	#define justeraav alignof
	#define tecken16_t char16_t
	#define tecken32_t char32_t
	#define konstantuttryck constexpr
	#define deklareratyp decltype
	#define ingetundantag noexcept
	#define ingetpekare nullptr
	#define trad_lokal thread_local
	#define statisk_pasta static_assert
#endif

#if __cpp_transactional_memory >= 201505
	/*
	 * TM TS
	 */
	#define sammanhangande_avbrott atomic_cancel
	#define sammanhangande_dedikera atomic_commit
	#define sammanhangande_utanundantag atomic_noexcept
	#define synkroniserad synchronized

	/*
	 * Koncept TS
	 */
	#define koncept concept
	#define kraver requires

	/*
	 * Moduler TS
	 */
	#define importera import
	#define modul module
#endif

#define och and
#define och_lika and_eq
#define montering asm
#define bitoch bitand
#define biteller bitor
#define boll bool
#define fanga catch
#define klass class
#define komplettera compl
#define konstant_konvertering const_cast
#define tabort delete
#define dynamisk_konvertering dynamic_cast
#define explicit explicit
#define exportera export
#define van friend
#define mitti inline
#define foranderlig mutable
#define namnomrade namespace
#define ny new
#define inte not
#define inte_lika not_eq
#define operator operator
#define eller or
#define eller_lika or_eq
#define privat private
#define skyddad protected
#define offentlig public
#define omtolka_konvertering reinterpret_cast
#define statisk_konvertering static_cast
#define mall template
#define detta this
#define kast throw
#define forsok try
#define typid typeid
#define typnamn typename
#define anvander using
#define virtuell virtual
#define brett_tecken_t wchar_t
#define xeller xor
#define xeller_lika xor_eq
#define sweut cout
#define swein cin
#define slutrad endl
