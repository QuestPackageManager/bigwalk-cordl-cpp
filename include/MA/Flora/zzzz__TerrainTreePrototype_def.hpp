#pragma once
// IWYU pragma private; include "MA/Flora/TerrainTreePrototype.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainTreePrototype)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class TreePrototype;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainTreePrototype;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainTreePrototype);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainTreePrototype, "MA.Flora", "TerrainTreePrototype");
// Dependencies MA.Flora.EntityObjectRef`1<T>, Unity.Mathematics.float3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainTreePrototype
struct CORDL_TYPE TerrainTreePrototype {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>*() ;

/// @brief Method Equals, addr 0x181512e70, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181512db0, size 0xc0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TerrainTreePrototype  other) ;

/// @brief Method GetHashCode, addr 0x181512f70, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x181513010, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::TreePrototype*  prototype) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>* i___System__IEquatable_1___MA__Flora__TerrainTreePrototype_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainTreePrototype() ;

// Ctor Parameters [CppParam { name: "Prefab", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "MaxDistance", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr TerrainTreePrototype(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prefab, ::Unity::Mathematics::float3  Scale, uint16_t  MaxDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Prefab, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prefab;

/// @brief Field Scale, offset: 0x4, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Scale;

/// @brief Field MaxDistance, offset: 0x10, size: 0x2, def value: None
 uint16_t  MaxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainTreePrototype, Prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreePrototype, Scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreePrototype, MaxDistance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainTreePrototype) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
