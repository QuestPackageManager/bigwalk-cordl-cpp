#pragma once
// IWYU pragma private; include "MA/InternalBridge/LightProbesBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbesBridge)
// Forward declare root types
namespace MA::InternalBridge {
class LightProbesBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::LightProbesBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::LightProbesBridge*, "MA.InternalBridge", "LightProbesBridge");
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.LightProbesBridge
class CORDL_TYPE LightProbesBridge : public ::System::Object {
public:
// Declarations
/// @brief Method GetCount, addr 0x181eccbe0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightProbesBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightProbesBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightProbesBridge(LightProbesBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightProbesBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightProbesBridge(LightProbesBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::LightProbesBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
