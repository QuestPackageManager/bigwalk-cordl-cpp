#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckBus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PeckBus)
namespace GlobalNamespace {
class PeckSystemBlock;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckBus;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckBus*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckBus*, "", "PeckBus");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckBus
class CORDL_TYPE PeckBus : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _blocks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__blocks, put=__cordl_internal_set__blocks)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*  _blocks;

 __declspec(property(get=get_blocks)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*  blocks;

/// @brief Method AddBlock, addr 0x1804467c0, size 0xc0, virtual false, abstract: false, final false
inline void AddBlock(::GlobalNamespace::PeckSystemBlock*  peckSystemBlock) ;

static inline ::GlobalNamespace::PeckBus* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>* const& __cordl_internal_get__blocks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*& __cordl_internal_get__blocks() ;

constexpr void __cordl_internal_set__blocks(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_blocks, addr 0x180446880, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>* get_blocks() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckBus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckBus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckBus(PeckBus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckBus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckBus(PeckBus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5335};

/// @brief Field _blocks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*  ____blocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckBus, ____blocks) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckBus) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
