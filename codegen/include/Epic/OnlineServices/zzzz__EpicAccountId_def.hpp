#pragma once
// IWYU pragma private; include "Epic/OnlineServices/EpicAccountId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EpicAccountId)
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::EpicAccountId*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::EpicAccountId*, "Epic.OnlineServices", "EpicAccountId");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.EpicAccountId
class CORDL_TYPE EpicAccountId : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method FromString, addr 0x1804d87c0, size 0x130, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::EpicAccountId* FromString(::Epic::OnlineServices::Utf8String*  accountIdString) ;

/// @brief Method IsValid, addr 0x1804d88f0, size 0x80, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::Epic::OnlineServices::EpicAccountId* New_ctor() ;

static inline ::Epic::OnlineServices::EpicAccountId* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ToString, addr 0x1804d89e0, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ToString(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method ToString, addr 0x1804d8970, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1804d7290, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

/// @brief Method op_Explicit, addr 0x1804d87c0, size 0x130, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::EpicAccountId* op_Explicit___Epic__OnlineServices__EpicAccountId_(::Epic::OnlineServices::Utf8String*  accountIdString) ;

/// @brief Method op_Explicit, addr 0x1804d8ad0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Explicit___Epic__OnlineServices__Utf8String_(::Epic::OnlineServices::EpicAccountId*  accountId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EpicAccountId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EpicAccountId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EpicAccountId(EpicAccountId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EpicAccountId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EpicAccountId(EpicAccountId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::EpicAccountId) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
