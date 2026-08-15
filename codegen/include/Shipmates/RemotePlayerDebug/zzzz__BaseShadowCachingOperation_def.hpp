#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/BaseShadowCachingOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseShadowCachingOperation)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class BaseShadowCachingOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::BaseShadowCachingOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::BaseShadowCachingOperation*, "Shipmates.RemotePlayerDebug", "BaseShadowCachingOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.BaseShadowCachingOperation
class CORDL_TYPE BaseShadowCachingOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Section)) ::StringW  Section;

/// @brief Method GetURPAsset, addr 0x1803a8dc0, size 0x80, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>,int32_t> GetURPAsset() ;

static inline ::Shipmates::RemotePlayerDebug::BaseShadowCachingOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Section, addr 0x1803a8e40, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Section() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseShadowCachingOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseShadowCachingOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseShadowCachingOperation(BaseShadowCachingOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseShadowCachingOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseShadowCachingOperation(BaseShadowCachingOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::BaseShadowCachingOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
