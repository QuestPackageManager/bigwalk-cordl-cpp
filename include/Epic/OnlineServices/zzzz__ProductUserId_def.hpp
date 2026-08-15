#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProductUserId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProductUserId)
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
class ProductUserId;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ProductUserId*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProductUserId*, "Epic.OnlineServices", "ProductUserId");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.ProductUserId
class CORDL_TYPE ProductUserId : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method FromString, addr 0x1804df8e0, size 0x130, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::ProductUserId* FromString(::Epic::OnlineServices::Utf8String*  productUserIdString) ;

/// @brief Method IsValid, addr 0x1804dfa10, size 0x80, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::Epic::OnlineServices::ProductUserId* New_ctor() ;

static inline ::Epic::OnlineServices::ProductUserId* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ToString, addr 0x1804dfb00, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ToString(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method ToString, addr 0x1804dfa90, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1804d7290, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

/// @brief Method op_Explicit, addr 0x1804df8e0, size 0x130, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::ProductUserId* op_Explicit___Epic__OnlineServices__ProductUserId_(::Epic::OnlineServices::Utf8String*  productUserIdString) ;

/// @brief Method op_Explicit, addr 0x1804dfbf0, size 0x60, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Explicit___Epic__OnlineServices__Utf8String_(::Epic::OnlineServices::ProductUserId*  accountId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductUserId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductUserId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductUserId(ProductUserId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductUserId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductUserId(ProductUserId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::ProductUserId) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
