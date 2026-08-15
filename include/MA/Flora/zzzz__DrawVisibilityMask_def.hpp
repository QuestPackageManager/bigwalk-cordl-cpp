#pragma once
// IWYU pragma private; include "MA/Flora/DrawVisibilityMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawVisibilityMask)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct DrawVisibilityMask;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawVisibilityMask);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawVisibilityMask, "MA.Flora", "DrawVisibilityMask");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawVisibilityMask
struct CORDL_TYPE DrawVisibilityMask {
public:
// Declarations
 __declspec(property(get=get_HasFadeKeyword, put=set_HasFadeKeyword)) bool  HasFadeKeyword;

 __declspec(property(get=get_HasFlippedWinding, put=set_HasFlippedWinding)) bool  HasFlippedWinding;

 __declspec(property(get=get_HasMotion, put=set_HasMotion)) bool  HasMotion;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_SplitMask, put=set_SplitMask)) uint8_t  SplitMask;

 __declspec(property(get=get_StateMask)) uint8_t  StateMask;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>*() ;

/// @brief Method CountSplits, addr 0x1814bd250, size 0x60, virtual false, abstract: false, final false
inline int32_t CountSplits() ;

/// @brief Method Create, addr 0x1814bd2b0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawVisibilityMask Create(uint8_t  splitMask, bool  hasFlippedWinding, bool  hasMotion, bool  hasFadeKeyword) ;

/// @brief Method Equals, addr 0x1814bd310, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814bd2f0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DrawVisibilityMask  other) ;

/// @brief Method GetHashCode, addr 0x180311f90, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsVisibleInSplit, addr 0x1814bd380, size 0x20, virtual false, abstract: false, final false
inline bool IsVisibleInSplit(int32_t  splitIndex) ;

/// @brief Method get_HasFadeKeyword, addr 0x181455c90, size 0x20, virtual false, abstract: false, final false
inline bool get_HasFadeKeyword() ;

/// @brief Method get_HasFlippedWinding, addr 0x1814bd3a0, size 0x20, virtual false, abstract: false, final false
inline bool get_HasFlippedWinding() ;

/// @brief Method get_HasMotion, addr 0x1814bd3c0, size 0x20, virtual false, abstract: false, final false
inline bool get_HasMotion() ;

/// @brief Method get_IsEmpty, addr 0x1814bd3e0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsVisible, addr 0x1814bd400, size 0x20, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// @brief Method get_None, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawVisibilityMask get_None() ;

/// @brief Method get_SplitMask, addr 0x1814bd420, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_SplitMask() ;

/// @brief Method get_StateMask, addr 0x1814bd440, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_StateMask() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>* i___System__IEquatable_1___MA__Flora__DrawVisibilityMask_() ;

/// @brief Method op_BitwiseAnd, addr 0x1814bd460, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawVisibilityMask op_BitwiseAnd(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b) ;

/// @brief Method op_BitwiseOr, addr 0x1814bd470, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawVisibilityMask op_BitwiseOr(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b) ;

/// @brief Method op_Equality, addr 0x1814bd480, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b) ;

/// @brief Method op_Inequality, addr 0x1814bd490, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b) ;

/// @brief Method set_HasFadeKeyword, addr 0x1814bd4a0, size 0x30, virtual false, abstract: false, final false
inline void set_HasFadeKeyword(bool  value) ;

/// @brief Method set_HasFlippedWinding, addr 0x1814bd4d0, size 0x30, virtual false, abstract: false, final false
inline void set_HasFlippedWinding(bool  value) ;

/// @brief Method set_HasMotion, addr 0x1814bd500, size 0x30, virtual false, abstract: false, final false
inline void set_HasMotion(bool  value) ;

/// @brief Method set_SplitMask, addr 0x1814bd530, size 0x20, virtual false, abstract: false, final false
inline void set_SplitMask(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawVisibilityMask() ;

// Ctor Parameters [CppParam { name: "packed", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DrawVisibilityMask(uint8_t  packed) noexcept;

/// @brief Field FadeBit offset 0xffffffff size 0x1
static constexpr uint8_t  FadeBit{static_cast<uint8_t>(0x1u)};

/// @brief Field FlippedBit offset 0xffffffff size 0x1
static constexpr uint8_t  FlippedBit{static_cast<uint8_t>(0x4u)};

/// @brief Field MotionBit offset 0xffffffff size 0x1
static constexpr uint8_t  MotionBit{static_cast<uint8_t>(0x2u)};

/// @brief Field SplitBits offset 0xffffffff size 0x1
static constexpr uint8_t  SplitBits{static_cast<uint8_t>(0x78u)};

/// @brief Field StateBits offset 0xffffffff size 0x1
static constexpr uint8_t  StateBits{static_cast<uint8_t>(0x7u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field packed, offset: 0x0, size: 0x1, def value: None
 uint8_t  packed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawVisibilityMask, packed) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawVisibilityMask) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
