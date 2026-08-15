#pragma once
// IWYU pragma private; include "GlobalNamespace/NameShuffler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameShuffler)
namespace GlobalNamespace {
class NetworkedSeed;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class NameShuffler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NameShuffler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NameShuffler*, "", "NameShuffler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NameShuffler
class CORDL_TYPE NameShuffler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field names, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_names, put=__cordl_internal_set_names)) ::ArrayW<::StringW>  names;

/// @brief Field networkedSeed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedSeed, put=__cordl_internal_set_networkedSeed)) ::UnityW<::GlobalNamespace::NetworkedSeed>  networkedSeed;

/// @brief Field textComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textComponent, put=__cordl_internal_set_textComponent)) ::UnityW<::TMPro::TMP_Text>  textComponent;

static inline ::GlobalNamespace::NameShuffler* New_ctor() ;

/// @brief Method OnEnable, addr 0x180425b20, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Shuffle, addr 0x180425cf0, size 0x50, virtual false, abstract: false, final false
inline void Shuffle() ;

/// @brief Method Shuffle, addr 0x180425b80, size 0x170, virtual false, abstract: false, final false
inline void Shuffle(int32_t  seed) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_names() ;

constexpr ::UnityW<::GlobalNamespace::NetworkedSeed> const& __cordl_internal_get_networkedSeed() const;

constexpr ::UnityW<::GlobalNamespace::NetworkedSeed>& __cordl_internal_get_networkedSeed() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textComponent() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textComponent() ;

constexpr void __cordl_internal_set_names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_networkedSeed(::UnityW<::GlobalNamespace::NetworkedSeed>  value) ;

constexpr void __cordl_internal_set_textComponent(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NameShuffler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NameShuffler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NameShuffler(NameShuffler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameShuffler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameShuffler(NameShuffler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5236};

/// @brief Field names, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___names;

/// @brief Field textComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textComponent;

/// @brief Field networkedSeed, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkedSeed>  ___networkedSeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NameShuffler, ___names) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NameShuffler, ___textComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NameShuffler, ___networkedSeed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NameShuffler) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
