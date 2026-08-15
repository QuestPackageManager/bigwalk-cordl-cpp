#pragma once
// IWYU pragma private; include "Rewired/PidVid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PidVid)
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
struct PidVid;
}
// Write type traits
MARK_VAL_T(::Rewired::PidVid);
DEFINE_IL2CPP_CLASS(::Rewired::PidVid, "Rewired", "PidVid");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PidVid
struct CORDL_TYPE PidVid {
public:
// Declarations
 __declspec(property(get=get_isZero)) bool  isZero;

/// @brief Convert operator to "::System::IEquatable_1<::Rewired::PidVid>"
constexpr operator  ::System::IEquatable_1<::Rewired::PidVid>*() ;

/// @brief Method ArrayContains, addr 0x181845cc0, size 0x70, virtual false, abstract: false, final false
static inline bool ArrayContains(::ArrayW<::StringW>  pidVids, ::by_ref<::Rewired::PidVid>  vidPid) ;

/// @brief Method EItlnZIPxNQjcvnoEDHTnfDYqdtw, addr 0x181845d30, size 0xb0, virtual false, abstract: false, final false
inline bool EItlnZIPxNQjcvnoEDHTnfDYqdtw(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Equals, addr 0x181845e50, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181845e20, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Rewired::PidVid  other) ;

/// @brief Method Equals, addr 0x181845de0, size 0x40, virtual false, abstract: false, final false
inline bool Equals(::StringW  pidVid) ;

/// @brief Method GetHashCode, addr 0x181845ec0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToProductGuid, addr 0x181845f10, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid ToProductGuid() ;

/// @brief Method ToString, addr 0x181845f60, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181845fc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181846080, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18150a400, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint16_t  _cordl_fixed_empty_name_whitespace, uint16_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_isZero, addr 0x1818460f0, size 0x20, virtual false, abstract: false, final false
inline bool get_isZero() ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::PidVid>"
constexpr ::System::IEquatable_1<::Rewired::PidVid>* i___System__IEquatable_1___Rewired__PidVid_() ;

/// @brief Method op_Equality, addr 0x181846110, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::PidVid  x, ::Rewired::PidVid  y) ;

/// @brief Method op_Inequality, addr 0x181846130, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::PidVid  x, ::Rewired::PidVid  y) ;

/// @brief Method yBcjnmfJhBFALyMZFwKomyIsIcCKA, addr 0x181846150, size 0x90, virtual false, abstract: false, final false
static inline ::StringW yBcjnmfJhBFALyMZFwKomyIsIcCKA(::StringW  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters []
// @brief default ctor
constexpr PidVid() ;

// Ctor Parameters [CppParam { name: "productId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "vendorId", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr PidVid(uint16_t  productId, uint16_t  vendorId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1804};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iBebJojbtxOvbqjPgOBTVcDTjzIgb offset 0xffffffff size 0x8
static constexpr ::ConstString  iBebJojbtxOvbqjPgOBTVcDTjzIgb{u"[^a-fA-F0-9]"};

/// @brief Field productId, offset: 0x0, size: 0x2, def value: None
 uint16_t  productId;

/// @brief Field vendorId, offset: 0x2, size: 0x2, def value: None
 uint16_t  vendorId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PidVid, productId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::PidVid, vendorId) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Rewired::PidVid) == 0x4, "Size mismatch!");

} // namespace end def Rewired
