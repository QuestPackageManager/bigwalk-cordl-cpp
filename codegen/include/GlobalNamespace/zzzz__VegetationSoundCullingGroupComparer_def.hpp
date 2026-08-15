#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundCullingGroupComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VegetationSoundCullingGroupComparer)
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class VegetationSoundCullingGroup;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VegetationSoundCullingGroupComparer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VegetationSoundCullingGroupComparer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VegetationSoundCullingGroupComparer*, "", "VegetationSoundCullingGroupComparer");
// Dependencies AudioRandomContainer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VegetationSoundCullingGroupComparer
class CORDL_TYPE VegetationSoundCullingGroupComparer : public ::System::Object {
public:
// Declarations
/// @brief Field _customOrder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__customOrder, put=__cordl_internal_set__customOrder)) ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  _customOrder;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*() noexcept;

/// @brief Method Compare, addr 0x1803f2840, size 0xa0, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::VegetationSoundCullingGroup*  x, ::GlobalNamespace::VegetationSoundCullingGroup*  y) ;

static inline ::GlobalNamespace::VegetationSoundCullingGroupComparer* New_ctor(::ArrayW<::GlobalNamespace::AudioRandomContainer*>  customOrder) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>> const& __cordl_internal_get__customOrder() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>& __cordl_internal_get__customOrder() ;

constexpr void __cordl_internal_set__customOrder(::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::GlobalNamespace::AudioRandomContainer*>  customOrder) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__VegetationSoundCullingGroup__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VegetationSoundCullingGroupComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VegetationSoundCullingGroupComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VegetationSoundCullingGroupComparer(VegetationSoundCullingGroupComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VegetationSoundCullingGroupComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VegetationSoundCullingGroupComparer(VegetationSoundCullingGroupComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4888};

/// @brief Field _customOrder, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  ____customOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroupComparer, ____customOrder) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VegetationSoundCullingGroupComparer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
