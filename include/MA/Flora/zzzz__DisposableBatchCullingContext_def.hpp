#pragma once
// IWYU pragma private; include "MA/Flora/DisposableBatchCullingContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DisposableBatchCullingContext)
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
// Forward declare root types
namespace MA::Flora {
struct DisposableBatchCullingContext;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DisposableBatchCullingContext);
DEFINE_IL2CPP_CLASS(::MA::Flora::DisposableBatchCullingContext, "MA.Flora", "DisposableBatchCullingContext");
// Dependencies UnityEngine.Rendering.BatchCullingContext
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DisposableBatchCullingContext
struct CORDL_TYPE DisposableBatchCullingContext {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18145b8f0, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  dependency) ;

/// @brief Method Dispose, addr 0x181457ce0, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x181454160, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::BatchCullingContext  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x18145ba60, size 0x80, virtual false, abstract: false, final false
static inline ::MA::Flora::DisposableBatchCullingContext op_Implicit___MA__Flora__DisposableBatchCullingContext(::UnityEngine::Rendering::BatchCullingContext  context) ;

/// @brief Method op_Implicit, addr 0x18145ba60, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchCullingContext op_Implicit___UnityEngine__Rendering__BatchCullingContext(::MA::Flora::DisposableBatchCullingContext  disposable) ;

// Ctor Parameters []
// @brief default ctor
constexpr DisposableBatchCullingContext() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Rendering::BatchCullingContext", modifiers: "", def_value: None }]
constexpr DisposableBatchCullingContext(::UnityEngine::Rendering::BatchCullingContext  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field Value, offset: 0x0, size: 0xb8, def value: None
 ::UnityEngine::Rendering::BatchCullingContext  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DisposableBatchCullingContext, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DisposableBatchCullingContext) == 0xb8, "Size mismatch!");

} // namespace end def MA::Flora
