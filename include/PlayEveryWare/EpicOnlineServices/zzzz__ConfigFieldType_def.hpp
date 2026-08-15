#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ConfigFieldType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigFieldType)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct ConfigFieldType;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::ConfigFieldType);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ConfigFieldType, "PlayEveryWare.EpicOnlineServices", "ConfigFieldType");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.ConfigFieldType
struct CORDL_TYPE ConfigFieldType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigFieldType_Unwrapped
enum struct __ConfigFieldType_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_FilePath = static_cast<int32_t>(0x1),
__E_DirectoryPath = static_cast<int32_t>(0x2),
__E_Flag = static_cast<int32_t>(0x3),
__E_Uint = static_cast<int32_t>(0x4),
__E_Ulong = static_cast<int32_t>(0x5),
__E_Float = static_cast<int32_t>(0x6),
__E_Double = static_cast<int32_t>(0x7),
__E_TextList = static_cast<int32_t>(0x8),
__E_Guid = static_cast<int32_t>(0x9),
__E_ProductionEnvironments = static_cast<int32_t>(0xa),
__E_SetOfClientCredentials = static_cast<int32_t>(0xb),
__E_ClientCredentials = static_cast<int32_t>(0xc),
__E_Version = static_cast<int32_t>(0xd),
__E_Deployment = static_cast<int32_t>(0xe),
__E_Enum = static_cast<int32_t>(0xf),
__E_Button = static_cast<int32_t>(0x10),
__E_WrappedInitializeThreadAffinity = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigFieldType_Unwrapped () const noexcept {
return static_cast<__ConfigFieldType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfigFieldType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigFieldType(int32_t  value__) noexcept;

/// @brief Field Button value: I32(16)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Button;

/// @brief Field ClientCredentials value: I32(12)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const ClientCredentials;

/// @brief Field Deployment value: I32(14)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Deployment;

/// @brief Field DirectoryPath value: I32(2)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const DirectoryPath;

/// @brief Field Double value: I32(7)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Double;

/// @brief Field Enum value: I32(15)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Enum;

/// @brief Field FilePath value: I32(1)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const FilePath;

/// @brief Field Flag value: I32(3)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Flag;

/// @brief Field Float value: I32(6)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Float;

/// @brief Field Guid value: I32(9)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Guid;

/// @brief Field ProductionEnvironments value: I32(10)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const ProductionEnvironments;

/// @brief Field SetOfClientCredentials value: I32(11)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const SetOfClientCredentials;

/// @brief Field Text value: I32(0)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Text;

/// @brief Field TextList value: I32(8)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const TextList;

/// @brief Field Uint value: I32(4)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Uint;

/// @brief Field Ulong value: I32(5)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Ulong;

/// @brief Field Version value: I32(13)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const Version;

/// @brief Field WrappedInitializeThreadAffinity value: I32(17)
static ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const WrappedInitializeThreadAffinity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ConfigFieldType) == 0x4, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
