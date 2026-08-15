#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ICallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICallbackInfo)
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
namespace Epic::OnlineServices {
class ICallbackInfo;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ICallbackInfo*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ICallbackInfo*, "Epic.OnlineServices", "ICallbackInfo");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.ICallbackInfo
class CORDL_TYPE ICallbackInfo {
public:
// Declarations
/// @brief Method GetClientData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ICallbackInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICallbackInfo(ICallbackInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
