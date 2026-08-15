#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/UninstallModCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UninstallModCallbackInfo)
namespace Epic::OnlineServices::Mods {
struct ModIdentifier;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct UninstallModCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::UninstallModCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::UninstallModCallbackInfo, "Epic.OnlineServices.Mods", "UninstallModCallbackInfo");
// Dependencies Epic.OnlineServices.Mods.ModIdentifier, Epic.OnlineServices.Result, System.Nullable`1<T>
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.UninstallModCallbackInfo
struct CORDL_TYPE UninstallModCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_Mod, put=set_Mod)) ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  Mod;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_Mod, addr 0x180503c00, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier> get_Mod() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_Mod, addr 0x180503c20, size 0x30, virtual false, abstract: false, final false
inline void set_Mod(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UninstallModCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_Mod_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>", modifiers: "", def_value: None }]
constexpr UninstallModCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <Mod>k__BackingField, offset: 0x18, size: 0x30, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModCallbackInfo, _ClientData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModCallbackInfo, _Mod_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::UninstallModCallbackInfo) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
