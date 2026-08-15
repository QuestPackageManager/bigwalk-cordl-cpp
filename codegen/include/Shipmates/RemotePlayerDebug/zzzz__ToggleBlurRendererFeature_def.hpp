#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleBlurRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleRendererFeatureOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleBlurRendererFeature)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleBlurRendererFeature;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleBlurRendererFeature*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleBlurRendererFeature*, "Shipmates.RemotePlayerDebug", "ToggleBlurRendererFeature");
// Dependencies Shipmates.RemotePlayerDebug.ToggleRendererFeatureOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleBlurRendererFeature
class CORDL_TYPE ToggleBlurRendererFeature : public ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b3a00, size 0xa0, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleBlurRendererFeature* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b3aa0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleBlurRendererFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleBlurRendererFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleBlurRendererFeature(ToggleBlurRendererFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleBlurRendererFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleBlurRendererFeature(ToggleBlurRendererFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleBlurRendererFeature) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
