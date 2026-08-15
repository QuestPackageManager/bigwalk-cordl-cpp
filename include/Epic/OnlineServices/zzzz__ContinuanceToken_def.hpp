#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ContinuanceToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ContinuanceToken)
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
class ContinuanceToken;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ContinuanceToken*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ContinuanceToken*, "Epic.OnlineServices", "ContinuanceToken");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.ContinuanceToken
class CORDL_TYPE ContinuanceToken : public ::Epic::OnlineServices::Handle {
public:
// Declarations
static inline ::Epic::OnlineServices::ContinuanceToken* New_ctor() ;

static inline ::Epic::OnlineServices::ContinuanceToken* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ToString, addr 0x1804d7130, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ToString(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method ToString, addr 0x1804d7220, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1804d7290, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

/// @brief Method op_Explicit, addr 0x1804d72d0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Explicit___Epic__OnlineServices__Utf8String_(::Epic::OnlineServices::ContinuanceToken*  continuanceToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuanceToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuanceToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuanceToken(ContinuanceToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuanceToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuanceToken(ContinuanceToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::ContinuanceToken) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
