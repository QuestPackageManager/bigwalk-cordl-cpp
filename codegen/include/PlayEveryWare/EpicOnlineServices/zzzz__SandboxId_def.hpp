#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SandboxId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SandboxId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct SandboxId;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::SandboxId);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SandboxId, "PlayEveryWare.EpicOnlineServices", "SandboxId");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.SandboxId
struct CORDL_TYPE SandboxId {
public:
// Declarations
 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::SandboxId>"
constexpr operator  ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*() ;

/// @brief Method Equals, addr 0x180546510, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805464f0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::PlayEveryWare::EpicOnlineServices::SandboxId  other) ;

/// @brief Method FromString, addr 0x180546580, size 0x30, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::SandboxId FromString(::StringW  sandboxString) ;

/// @brief Method GetHashCode, addr 0x1805465b0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsNullOrEmpty, addr 0x1805465e0, size 0x70, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::PlayEveryWare::EpicOnlineServices::SandboxId  sandboxId) ;

/// @brief Method IsNullOrEmpty, addr 0x1805465e0, size 0x70, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  sandboxString) ;

/// @brief Method IsValid, addr 0x180546650, size 0x70, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_IsEmpty, addr 0x1805466c0, size 0x80, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Value, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::SandboxId>"
constexpr ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* i___System__IEquatable_1___PlayEveryWare__EpicOnlineServices__SandboxId_() ;

/// @brief Method set_Value, addr 0x180546740, size 0x110, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SandboxId() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr SandboxId(::StringW  _value) noexcept;

/// @brief Field PreProductionEnvironmentRegex offset 0xffffffff size 0x8
static constexpr ::ConstString  PreProductionEnvironmentRegex{u"^p\\-[a-zA-Z\\d]{30}$"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value, offset: 0x0, size: 0x8, def value: None
 ::StringW  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SandboxId, _value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SandboxId) == 0x8, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
