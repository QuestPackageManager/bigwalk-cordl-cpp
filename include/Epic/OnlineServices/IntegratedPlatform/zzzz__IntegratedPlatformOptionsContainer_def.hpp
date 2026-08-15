#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformOptionsContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(IntegratedPlatformOptionsContainer)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformOptionsContainerAddOptions;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamIntegratedPlatformOptionsContainerAddOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
class IntegratedPlatformOptionsContainer;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*, "Epic.OnlineServices.IntegratedPlatform", "IntegratedPlatformOptionsContainer");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformOptionsContainer
class CORDL_TYPE IntegratedPlatformOptionsContainer : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method Add, addr 0x1805177e0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result Add(::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>  inOptions) ;

/// @brief Method Add, addr 0x180517860, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result Add(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>  inOptions) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* New_ctor() ;

static inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x180517900, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformOptionsContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformOptionsContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedPlatformOptionsContainer(IntegratedPlatformOptionsContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformOptionsContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedPlatformOptionsContainer(IntegratedPlatformOptionsContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
