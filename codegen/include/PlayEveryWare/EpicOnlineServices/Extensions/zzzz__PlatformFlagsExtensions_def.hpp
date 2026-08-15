#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/PlatformFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformFlagsExtensions)
namespace Epic::OnlineServices::Platform {
struct PlatformFlags;
}
namespace PlayEveryWare::EpicOnlineServices {
struct WrappedPlatformFlags;
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
class PlatformFlagsExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*, "PlayEveryWare.EpicOnlineServices.Extensions", "PlatformFlagsExtensions");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Extensions.PlatformFlagsExtensions
class CORDL_TYPE PlatformFlagsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field <CustomMappings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CustomMappings_k__BackingField, put=setStaticF__CustomMappings_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*  _CustomMappings_k__BackingField;

/// @brief Method GetDescription, addr 0x1805436c0, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetDescription(::Epic::OnlineServices::Platform::PlatformFlags  platformFlags) ;

/// @brief Method TryParse, addr 0x180543820, size 0x60, virtual false, abstract: false, final false
static inline bool TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::Platform::PlatformFlags>  result) ;

/// @brief Method Unwrap, addr 0x180543880, size 0x10, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Platform::PlatformFlags Unwrap(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  wrappedFlags) ;

/// @brief Method Wrap, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags Wrap(::Epic::OnlineServices::Platform::PlatformFlags  internalFlags) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>* getStaticF__CustomMappings_k__BackingField() ;

/// @brief Method get_CustomMappings, addr 0x1805439f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>* get_CustomMappings() ;

static inline void setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformFlagsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformFlagsExtensions(PlatformFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformFlagsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformFlagsExtensions(PlatformFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Extensions
