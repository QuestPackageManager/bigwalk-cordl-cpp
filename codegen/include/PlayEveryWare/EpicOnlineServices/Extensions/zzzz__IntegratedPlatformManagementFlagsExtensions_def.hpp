#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/IntegratedPlatformManagementFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IntegratedPlatformManagementFlagsExtensions)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Extensions {
class IntegratedPlatformManagementFlagsExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*, "PlayEveryWare.EpicOnlineServices.Extensions", "IntegratedPlatformManagementFlagsExtensions");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Extensions.IntegratedPlatformManagementFlagsExtensions
class CORDL_TYPE IntegratedPlatformManagementFlagsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field <CustomMappings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CustomMappings_k__BackingField, put=setStaticF__CustomMappings_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*  _CustomMappings_k__BackingField;

/// @brief Method GetDescription, addr 0x180540a80, size 0x120, virtual false, abstract: false, final false
static inline ::StringW GetDescription(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  flags) ;

/// @brief Method TryParse, addr 0x180540ba0, size 0x60, virtual false, abstract: false, final false
static inline bool TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>  flags) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>* getStaticF__CustomMappings_k__BackingField() ;

/// @brief Method get_CustomMappings, addr 0x180540e90, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>* get_CustomMappings() ;

static inline void setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformManagementFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformManagementFlagsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedPlatformManagementFlagsExtensions(IntegratedPlatformManagementFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedPlatformManagementFlagsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedPlatformManagementFlagsExtensions(IntegratedPlatformManagementFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Extensions
