#pragma once
// IWYU pragma private; include "Dissonance/IAccessTokenCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IAccessTokenCollection)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Dissonance {
class IAccessTokenCollection;
}
// Write type traits
MARK_REF_T(::Dissonance::IAccessTokenCollection*);
DEFINE_IL2CPP_CLASS(::Dissonance::IAccessTokenCollection*, "Dissonance", "IAccessTokenCollection");
// Dependencies 
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.IAccessTokenCollection
class CORDL_TYPE IAccessTokenCollection {
public:
// Declarations
 __declspec(property(get=get_Tokens)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  Tokens;

/// @brief Method AddToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool AddToken(::StringW  token) ;

/// @brief Method ContainsToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ContainsToken(::StringW  token) ;

/// @brief Method RemoveToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool RemoveToken(::StringW  token) ;

/// @brief Method get_Tokens, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Tokens() ;

// Ctor Parameters [CppParam { name: "", ty: "IAccessTokenCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAccessTokenCollection(IAccessTokenCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
