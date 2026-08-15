#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Epic::OnlineServices {
class Common;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Common*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Common*, "Epic.OnlineServices", "Common");
// Dependencies System.Object, System.Runtime.InteropServices.CallingConvention
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Common
class CORDL_TYPE Common : public ::System::Object {
public:
// Declarations
/// @brief Field IPT_UNKNOWN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IPT_UNKNOWN, put=setStaticF_IPT_UNKNOWN)) ::Epic::OnlineServices::Utf8String*  IPT_UNKNOWN;

/// @brief Method IsOperationComplete, addr 0x1804d6c80, size 0x80, virtual false, abstract: false, final false
static inline bool IsOperationComplete(::Epic::OnlineServices::Result  result) ;

static inline ::Epic::OnlineServices::Common* New_ctor() ;

/// @brief Method ToString, addr 0x1804d6d00, size 0x1b0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result ToString(::System::ArraySegment_1<uint8_t>  byteArray, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method ToString, addr 0x1804d6f50, size 0x1a0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToString(::System::ArraySegment_1<uint8_t>  byteArray) ;

/// @brief Method ToString, addr 0x1804d6eb0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToString(::Epic::OnlineServices::Result  result) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_IPT_UNKNOWN() ;

static inline void setStaticF_IPT_UNKNOWN(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common(Common && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common(Common const& ) = delete;

/// @brief Field EPICACCOUNTID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  EPICACCOUNTID_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field INVALID_NOTIFICATIONID offset 0xffffffff size 0x8
static constexpr uint64_t  INVALID_NOTIFICATIONID{static_cast<uint64_t>(0x0u)};

/// @brief Field LIBRARY_CALLING_CONVENTION value: I32(2)
static ::System::Runtime::InteropServices::CallingConvention const LIBRARY_CALLING_CONVENTION;

/// @brief Field LIBRARY_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  LIBRARY_NAME{u"EOSSDK-Win64-Shipping"};

/// @brief Field OPT_EPIC offset 0xffffffff size 0x4
static constexpr int32_t  OPT_EPIC{static_cast<int32_t>(0x64)};

/// @brief Field OPT_UNKNOWN offset 0xffffffff size 0x4
static constexpr int32_t  OPT_UNKNOWN{static_cast<int32_t>(0x0)};

/// @brief Field PRODUCTUSERID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  PRODUCTUSERID_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field WINDOWS_STEAM_OPT offset 0xffffffff size 0x4
static constexpr int32_t  WINDOWS_STEAM_OPT{static_cast<int32_t>(0xfa0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Common) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
