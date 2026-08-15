#pragma once
// IWYU pragma private; include "UnityEngine/RenderingLayerMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerMask)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct RenderingLayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderingLayerMask);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderingLayerMask, "UnityEngine", "RenderingLayerMask");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderingLayerMask
struct CORDL_TYPE RenderingLayerMask {
public:
// Declarations
/// @brief Field <defaultRenderingLayerMask>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__defaultRenderingLayerMask_k__BackingField, put=setStaticF__defaultRenderingLayerMask_k__BackingField)) ::UnityEngine::RenderingLayerMask  _defaultRenderingLayerMask_k__BackingField;

/// @brief Method GetDefinedRenderingLayerCount, addr 0x1822788c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetDefinedRenderingLayerCount() ;

/// @brief Method GetDefinedRenderingLayerNames, addr 0x1822788d0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetDefinedRenderingLayerNames() ;

/// @brief Method GetDefinedRenderingLayersCombinedMaskValue, addr 0x1822788e0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetDefinedRenderingLayersCombinedMaskValue() ;

/// @brief Method GetRenderingLayerCount, addr 0x1822788f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetRenderingLayerCount() ;

/// @brief Method RenderingLayerToName, addr 0x182278910, size 0x90, virtual false, abstract: false, final false
static inline ::StringW RenderingLayerToName(int32_t  layer) ;

/// @brief Method RenderingLayerToName_Injected, addr 0x182278900, size 0x10, virtual false, abstract: false, final false
static inline void RenderingLayerToName_Injected(int32_t  layer, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

static inline ::UnityEngine::RenderingLayerMask getStaticF__defaultRenderingLayerMask_k__BackingField() ;

/// @brief Method get_defaultRenderingLayerMask, addr 0x1822789d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderingLayerMask get_defaultRenderingLayerMask() ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderingLayerMask op_Implicit___UnityEngine__RenderingLayerMask(int32_t  intVal) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderingLayerMask op_Implicit___UnityEngine__RenderingLayerMask(uint32_t  intVal) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::UnityEngine::RenderingLayerMask  mask) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Implicit_uint32_t(::UnityEngine::RenderingLayerMask  mask) ;

static inline void setStaticF__defaultRenderingLayerMask_k__BackingField(::UnityEngine::RenderingLayerMask  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderingLayerMask() ;

// Ctor Parameters [CppParam { name: "m_Bits", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RenderingLayerMask(uint32_t  m_Bits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field maxRenderingLayerSize offset 0xffffffff size 0x4
static constexpr int32_t  maxRenderingLayerSize{static_cast<int32_t>(0x20)};

/// @brief Field m_Bits, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderingLayerMask, m_Bits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RenderingLayerMask) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
