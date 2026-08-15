#pragma once
// IWYU pragma private; include "Dissonance/TokenSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TokenSet)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Dissonance {
class TokenSet;
}
// Write type traits
MARK_REF_T(::Dissonance::TokenSet*);
DEFINE_IL2CPP_CLASS(::Dissonance::TokenSet*, "Dissonance", "TokenSet");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.TokenSet
class CORDL_TYPE TokenSet : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field SortOrder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SortOrder, put=setStaticF_SortOrder)) ::System::Collections::Generic::IComparer_1<::StringW>*  SortOrder;

/// @brief Field TokenAdded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TokenAdded, put=__cordl_internal_set_TokenAdded)) ::System::Action_1<::StringW>*  TokenAdded;

/// @brief Field TokenRemoved, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TokenRemoved, put=__cordl_internal_set_TokenRemoved)) ::System::Action_1<::StringW>*  TokenRemoved;

/// @brief Field _tokens, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tokens, put=__cordl_internal_set__tokens)) ::System::Collections::Generic::List_1<::StringW>*  _tokens;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AddToken, addr 0x1805d1910, size 0xf0, virtual false, abstract: false, final false
inline bool AddToken(::StringW  token) ;

/// @brief Method ContainsToken, addr 0x1805d1a00, size 0x80, virtual false, abstract: false, final false
inline bool ContainsToken(::StringW  token) ;

/// @brief Method Find, addr 0x1805d1a80, size 0x70, virtual false, abstract: false, final false
inline int32_t Find(::StringW  item) ;

/// @brief Method GetEnumerator, addr 0x1805d1af0, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* GetEnumerator() ;

/// @brief Method IntersectsWith, addr 0x1805d1b40, size 0x1d0, virtual false, abstract: false, final false
inline bool IntersectsWith(::Dissonance::TokenSet*  other) ;

static inline ::Dissonance::TokenSet* New_ctor() ;

/// @brief Method RemoveToken, addr 0x1805d1d10, size 0xe0, virtual false, abstract: false, final false
inline bool RemoveToken(::StringW  token) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1805d1af0, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_TokenAdded() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_TokenAdded() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_TokenRemoved() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_TokenRemoved() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__tokens() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tokens() ;

constexpr void __cordl_internal_set_TokenAdded(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TokenRemoved(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__tokens(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1805d1e50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_TokenAdded, addr 0x1805d1ea0, size 0x90, virtual false, abstract: false, final false
inline void add_TokenAdded(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TokenRemoved, addr 0x1805d1f30, size 0x90, virtual false, abstract: false, final false
inline void add_TokenRemoved(::System::Action_1<::StringW>*  value) ;

static inline ::System::Collections::Generic::IComparer_1<::StringW>* getStaticF_SortOrder() ;

/// @brief Method get_Count, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method remove_TokenAdded, addr 0x1805d1fc0, size 0x90, virtual false, abstract: false, final false
inline void remove_TokenAdded(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TokenRemoved, addr 0x1805d2050, size 0xb0, virtual false, abstract: false, final false
inline void remove_TokenRemoved(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_SortOrder(::System::Collections::Generic::IComparer_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TokenSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TokenSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TokenSet(TokenSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TokenSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TokenSet(TokenSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16827};

/// @brief Field _tokens, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____tokens;

/// @brief Field TokenRemoved, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___TokenRemoved;

/// @brief Field TokenAdded, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___TokenAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::TokenSet, ____tokens) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::TokenSet, ___TokenRemoved) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::TokenSet, ___TokenAdded) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::TokenSet) == 0x28, "Size mismatch!");

} // namespace end def Dissonance
