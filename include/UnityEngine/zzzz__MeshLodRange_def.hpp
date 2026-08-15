#pragma once
// IWYU pragma private; include "UnityEngine/MeshLodRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshLodRange)
// Forward declare root types
namespace UnityEngine {
struct MeshLodRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MeshLodRange);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshLodRange, "UnityEngine", "MeshLodRange");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MeshLodRange
struct CORDL_TYPE MeshLodRange {
public:
// Declarations
 __declspec(property(get=get_indexCount)) uint32_t  indexCount;

 __declspec(property(get=get_indexStart)) uint32_t  indexStart;

/// @brief Method ToString, addr 0x1822568f0, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_indexCount, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_indexCount() ;

/// @brief Method get_indexStart, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_indexStart() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshLodRange() ;

// Ctor Parameters [CppParam { name: "m_IndexStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr MeshLodRange(uint32_t  m_IndexStart, uint32_t  m_IndexCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_IndexStart, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_IndexStart;

/// @brief Field m_IndexCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_IndexCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MeshLodRange, m_IndexStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::MeshLodRange, m_IndexCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MeshLodRange) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
