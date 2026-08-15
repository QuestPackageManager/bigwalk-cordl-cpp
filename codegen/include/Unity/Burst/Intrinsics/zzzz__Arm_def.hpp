#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Arm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Arm)
namespace Unity::Burst::Intrinsics {
class Arm_Neon;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v64;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class Arm;
}
namespace Unity::Burst::Intrinsics {
class Arm_Neon;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Intrinsics::Arm*);
MARK_REF_T(::Unity::Burst::Intrinsics::Arm_Neon*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Arm/Neon
class CORDL_TYPE Arm_Neon : public ::System::Object {
public:
// Declarations
static inline ::Unity::Burst::Intrinsics::Arm_Neon* New_ctor() ;

/// @brief Method __crc32b, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32b(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cb, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32cb(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cd, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32cd(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32ch, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32ch(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32cw, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32cw(uint32_t  a0, uint32_t  a1) ;

/// @brief Method __crc32d, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32d(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32h, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32h(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32w, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t __crc32w(uint32_t  a0, uint32_t  a1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsNeonArmv82FeaturesSupported() ;

/// @brief Method get_IsNeonCryptoSupported, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsNeonCryptoSupported() ;

/// @brief Method get_IsNeonDotProdSupported, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsNeonDotProdSupported() ;

/// @brief Method get_IsNeonRDMASupported, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsNeonRDMASupported() ;

/// @brief Method get_IsNeonSupported, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsNeonSupported() ;

/// @brief Method vaba_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabaq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabd_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vabdd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vabdl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabds_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vabds_f32(float_t  a0, float_t  a1) ;

/// @brief Method vabs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabsd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vabsd_s64(int64_t  a0) ;

/// @brief Method vabsq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vadd_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vaddd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vaddhn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u16, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u32, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u64, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u16, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u32, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u64, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddlv_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlvq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddvq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddw_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaesdq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaeseq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaesimcq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaesmcq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vand_s16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vandq_s16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbic_s16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbicq_s16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbsl_f32, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_f64, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s16, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s32, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s64, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u16, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u32, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u64, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u8, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbslq_f32, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_f64, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s16, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s32, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s64, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u16, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u32, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u64, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u8, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vcage_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcage_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaged_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcaged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcageq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcageq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcages_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcages_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcagt_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagt_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagtd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcagtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcagtq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagtq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagts_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcagts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcale_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcale_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaled_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcaled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaleq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaleq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcales_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcales_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcalt_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcalt_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaltd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcaltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaltq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaltq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcalts_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcalts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceqd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vceqd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vceqd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vceqq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vceqs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceqz_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u64, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqzd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqzd_f64(double_t  a0) ;

/// @brief Method vceqzd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqzd_s64(int64_t  a0) ;

/// @brief Method vceqzd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vceqzd_u64(uint64_t  a0) ;

/// @brief Method vceqzq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u64, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vceqzs_f32(float_t  a0) ;

/// @brief Method vcge_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcged_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcged_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcged_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcged_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcged_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgeq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcges_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcges_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgez_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgezd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgezd_f64(double_t  a0) ;

/// @brief Method vcgezd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgezd_s64(int64_t  a0) ;

/// @brief Method vcgezq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcgezs_f32(float_t  a0) ;

/// @brief Method vcgt_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgtd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcgtd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgtd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcgtd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgtd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgtq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgts_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcgts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgtz_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtzd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_f64(double_t  a0) ;

/// @brief Method vcgtzd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_s64(int64_t  a0) ;

/// @brief Method vcgtzq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcgtzs_f32(float_t  a0) ;

/// @brief Method vcle_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcled_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcled_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcled_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcled_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcled_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcleq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcles_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcles_f32(float_t  a0, float_t  a1) ;

/// @brief Method vclez_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclezd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vclezd_f64(double_t  a0) ;

/// @brief Method vclezd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vclezd_s64(int64_t  a0) ;

/// @brief Method vclezq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vclezs_f32(float_t  a0) ;

/// @brief Method vcls_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclsq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclt_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcltd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcltd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcltd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcltd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcltd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcltq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vclts_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vclts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcltz_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltzd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcltzd_f64(double_t  a0) ;

/// @brief Method vcltzd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcltzd_s64(int64_t  a0) ;

/// @brief Method vcltzq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcltzs_f32(float_t  a0) ;

/// @brief Method vclz_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclzq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcnt_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcnt_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcntq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcntq_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcombine_f16, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f32, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f64, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s16, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s32, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s64, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s8, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u16, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u32, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u64, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u8, addr 0x181e916a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcopy_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_f64, addr 0x181e916c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s64, addr 0x181e916c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u64, addr 0x181e916c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcreate_f16, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t  a0) ;

/// @brief Method vcreate_f32, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t  a0) ;

/// @brief Method vcreate_f64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t  a0) ;

/// @brief Method vcreate_s16, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t  a0) ;

/// @brief Method vcreate_s32, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t  a0) ;

/// @brief Method vcreate_s64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t  a0) ;

/// @brief Method vcreate_s8, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t  a0) ;

/// @brief Method vcreate_u16, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t  a0) ;

/// @brief Method vcreate_u32, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t  a0) ;

/// @brief Method vcreate_u64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t  a0) ;

/// @brief Method vcreate_u8, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t  a0) ;

/// @brief Method vcvt_f32_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_high_f32_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvt_high_f64_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_n_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtad_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtad_s64_f64(double_t  a0) ;

/// @brief Method vcvtad_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtad_u64_f64(double_t  a0) ;

/// @brief Method vcvtaq_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtas_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvtas_s32_f32(float_t  a0) ;

/// @brief Method vcvtas_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvtas_u32_f32(float_t  a0) ;

/// @brief Method vcvtd_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_s64(int64_t  a0) ;

/// @brief Method vcvtd_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_u64(uint64_t  a0) ;

/// @brief Method vcvtd_n_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtd_n_s64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtd_n_u64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtd_s64_f64(double_t  a0) ;

/// @brief Method vcvtd_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtd_u64_f64(double_t  a0) ;

/// @brief Method vcvtm_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtmd_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtmd_s64_f64(double_t  a0) ;

/// @brief Method vcvtmd_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtmd_u64_f64(double_t  a0) ;

/// @brief Method vcvtmq_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtms_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvtms_s32_f32(float_t  a0) ;

/// @brief Method vcvtms_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvtms_u32_f32(float_t  a0) ;

/// @brief Method vcvtn_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtnd_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtnd_s64_f64(double_t  a0) ;

/// @brief Method vcvtnd_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtnd_u64_f64(double_t  a0) ;

/// @brief Method vcvtnq_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtns_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvtns_s32_f32(float_t  a0) ;

/// @brief Method vcvtns_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvtns_u32_f32(float_t  a0) ;

/// @brief Method vcvtp_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtpd_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vcvtpd_s64_f64(double_t  a0) ;

/// @brief Method vcvtpd_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vcvtpd_u64_f64(double_t  a0) ;

/// @brief Method vcvtpq_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtps_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvtps_s32_f32(float_t  a0) ;

/// @brief Method vcvtps_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvtps_u32_f32(float_t  a0) ;

/// @brief Method vcvtq_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_n_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_s64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u64_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvts_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vcvts_f32_s32(int32_t  a0) ;

/// @brief Method vcvts_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vcvts_f32_u32(uint32_t  a0) ;

/// @brief Method vcvts_n_f32_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_f32_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvts_n_s32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvts_n_u32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_s32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vcvts_s32_f32(float_t  a0) ;

/// @brief Method vcvts_u32_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vcvts_u32_f32(float_t  a0) ;

/// @brief Method vcvtx_f32_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtx_high_f32_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvtxd_f32_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vcvtxd_f32_f64(double_t  a0) ;

/// @brief Method vdiv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdiv_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdivq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdivq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdot_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdot_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdotq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdotq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdup_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_f64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_n_f32, addr 0x181e916d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t  a0) ;

/// @brief Method vdup_n_f64, addr 0x181e91700, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t  a0) ;

/// @brief Method vdup_n_s16, addr 0x181e91730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t  a0) ;

/// @brief Method vdup_n_s32, addr 0x181e91760, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t  a0) ;

/// @brief Method vdup_n_s64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t  a0) ;

/// @brief Method vdup_n_s8, addr 0x181e91790, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t  a0) ;

/// @brief Method vdup_n_u16, addr 0x181e91730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t  a0) ;

/// @brief Method vdup_n_u32, addr 0x181e91760, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t  a0) ;

/// @brief Method vdup_n_u64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t  a0) ;

/// @brief Method vdup_n_u8, addr 0x181e91790, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t  a0) ;

/// @brief Method vdupb_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_f64, addr 0x181959300, size 0x10, virtual false, abstract: false, final false
static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_s64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_u64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f64, addr 0x181e917c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s64, addr 0x181e917c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u64, addr 0x181e917c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_n_f32, addr 0x181e917f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t  a0) ;

/// @brief Method vdupq_n_f64, addr 0x181e91810, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t  a0) ;

/// @brief Method vdupq_n_s16, addr 0x181e91830, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t  a0) ;

/// @brief Method vdupq_n_s32, addr 0x181e91850, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t  a0) ;

/// @brief Method vdupq_n_s64, addr 0x181e91870, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t  a0) ;

/// @brief Method vdupq_n_s8, addr 0x181e91890, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t  a0) ;

/// @brief Method vdupq_n_u16, addr 0x181e91830, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t  a0) ;

/// @brief Method vdupq_n_u32, addr 0x181e91850, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t  a0) ;

/// @brief Method vdupq_n_u64, addr 0x181e91870, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t  a0) ;

/// @brief Method vdupq_n_u8, addr 0x181e91890, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t  a0) ;

/// @brief Method vdups_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method veor_s16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veorq_s16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vext_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_f64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vextq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vfma_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_lane_f64, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfma_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmad_lane_f64, addr 0x181e918b0, size 0x60, virtual false, abstract: false, final false
static inline double_t vfmad_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmad_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vfmad_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmaq_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmas_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vfmas_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmas_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vfmas_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_lane_f64, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfms_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmsd_lane_f64, addr 0x181e918b0, size 0x60, virtual false, abstract: false, final false
static inline double_t vfmsd_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsd_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vfmsd_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmsq_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmss_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vfmss_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmss_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vfmss_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vget_high_f32, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_f64, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s16, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s32, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s64, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s8, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u16, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u32, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u64, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u8, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_f64, addr 0x181959300, size 0x10, virtual false, abstract: false, final false
static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u64, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_low_f32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_f64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s16, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s8, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u16, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u8, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vgetq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vhadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsub_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsubq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vld1_f32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t*  a0) ;

/// @brief Method vld1_f64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t*  a0) ;

/// @brief Method vld1_s16, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t*  a0) ;

/// @brief Method vld1_s32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t*  a0) ;

/// @brief Method vld1_s64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t*  a0) ;

/// @brief Method vld1_s8, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t*  a0) ;

/// @brief Method vld1_u16, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t*  a0) ;

/// @brief Method vld1_u32, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t*  a0) ;

/// @brief Method vld1_u64, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t*  a0) ;

/// @brief Method vld1_u8, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t*  a0) ;

/// @brief Method vld1q_f32, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t*  a0) ;

/// @brief Method vld1q_f64, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t*  a0) ;

/// @brief Method vld1q_s16, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t*  a0) ;

/// @brief Method vld1q_s32, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t*  a0) ;

/// @brief Method vld1q_s64, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t*  a0) ;

/// @brief Method vld1q_s8, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t*  a0) ;

/// @brief Method vld1q_u16, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t*  a0) ;

/// @brief Method vld1q_u32, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t*  a0) ;

/// @brief Method vld1q_u64, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t*  a0) ;

/// @brief Method vld1q_u8, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t*  a0) ;

/// @brief Method vmax_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnmq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxnmvq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxnmvq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxvq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmin_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnmq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminnmvq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminnmvq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminv_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminvq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmla_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmla_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmla_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmla_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmla_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmla_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u16, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u32, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u8, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlal_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlal_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlal_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlal_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlal_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlal_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlal_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlal_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlaq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlaq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlaq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlaq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlaq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlaq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u16, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u32, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u8, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmls_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmls_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmls_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmls_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmls_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmls_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u16, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u32, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u8, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsl_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsl_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsl_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlsl_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlsl_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlsl_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlsl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlsq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u16, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u32, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u8, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmov_n_f32, addr 0x181e916d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t  a0) ;

/// @brief Method vmov_n_f64, addr 0x181e91700, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t  a0) ;

/// @brief Method vmov_n_s16, addr 0x181e91730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t  a0) ;

/// @brief Method vmov_n_s32, addr 0x181e91760, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t  a0) ;

/// @brief Method vmov_n_s64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t  a0) ;

/// @brief Method vmov_n_s8, addr 0x181e91790, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t  a0) ;

/// @brief Method vmov_n_u16, addr 0x181e91730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t  a0) ;

/// @brief Method vmov_n_u32, addr 0x181e91760, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t  a0) ;

/// @brief Method vmov_n_u64, addr 0x181a487e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t  a0) ;

/// @brief Method vmov_n_u8, addr 0x181e91790, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t  a0) ;

/// @brief Method vmovl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u16, addr 0x181e91910, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u32, addr 0x181e91910, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u64, addr 0x181e91910, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u16, addr 0x181e91930, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u32, addr 0x181e91930, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u64, addr 0x181e91930, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovq_n_f32, addr 0x181e917f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t  a0) ;

/// @brief Method vmovq_n_f64, addr 0x181e91810, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t  a0) ;

/// @brief Method vmovq_n_s16, addr 0x181e91830, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t  a0) ;

/// @brief Method vmovq_n_s32, addr 0x181e91850, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t  a0) ;

/// @brief Method vmovq_n_s64, addr 0x181e91870, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t  a0) ;

/// @brief Method vmovq_n_s8, addr 0x181e91890, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t  a0) ;

/// @brief Method vmovq_n_u16, addr 0x181e91830, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t  a0) ;

/// @brief Method vmovq_n_u32, addr 0x181e91850, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t  a0) ;

/// @brief Method vmovq_n_u64, addr 0x181e91870, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t  a0) ;

/// @brief Method vmovq_n_u8, addr 0x181e91890, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t  a0) ;

/// @brief Method vmul_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_f64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64  a0, float_t  a1) ;

/// @brief Method vmul_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64  a0, double_t  a1) ;

/// @brief Method vmul_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmul_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmul_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmul_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmul_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmuld_lane_f64, addr 0x181e91950, size 0x20, virtual false, abstract: false, final false
static inline double_t vmuld_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuld_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vmuld_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmull_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmull_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmull_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmull_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmull_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmull_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmull_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmull_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_n_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128  a0, float_t  a1) ;

/// @brief Method vmulq_n_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128  a0, double_t  a1) ;

/// @brief Method vmulq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmulq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmulq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmulq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmulq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmuls_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmuls_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuls_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmuls_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_lane_f64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vmulxd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vmulxd_lane_f64, addr 0x181e91970, size 0x20, virtual false, abstract: false, final false
static inline double_t vmulxd_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxd_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vmulxd_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmulxs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vmulxs_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmulxs_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxs_laneq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vmulxs_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmvn_s16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvnq_s16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vneg_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vnegd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vnegd_s64(int64_t  a0) ;

/// @brief Method vnegq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vorn_s16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vornq_s16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorr_s16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorrq_s16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadal_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadalq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadd_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpaddd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddlq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadds_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmax_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnm_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnmq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmqd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxnms_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmaxq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxqd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmin_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnm_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnmq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmqd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpminnms_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpminq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminqd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmins_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabsb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqabsb_s8(int8_t  a0) ;

/// @brief Method vqabsd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqabsd_s64(int64_t  a0) ;

/// @brief Method vqabsh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqabsh_s16(int16_t  a0) ;

/// @brief Method vqabsq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabss_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqabss_s32(int32_t  a0) ;

/// @brief Method vqadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqaddb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqaddb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqaddb_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqaddb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqaddd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqaddd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqaddh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqaddh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqaddh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqaddh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqadds_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqadds_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqadds_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqadds_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqdmlal_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlal_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlal_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlal_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlal_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlal_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlalh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlals_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlals_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlals_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlals_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlals_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlals_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlsl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlslh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlsls_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmulh_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmulh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulh_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulhh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmulhq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhs_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmull_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmull_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmull_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmull_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmullh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmullh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmullh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmullh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmullh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqdmullh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulls_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmulls_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulls_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmulls_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqdmulls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqmovn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovnd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqmovnd_s64(int64_t  a0) ;

/// @brief Method vqmovnd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqmovnd_u64(uint64_t  a0) ;

/// @brief Method vqmovnh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqmovnh_s16(int16_t  a0) ;

/// @brief Method vqmovnh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqmovnh_u16(uint16_t  a0) ;

/// @brief Method vqmovns_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqmovns_s32(int32_t  a0) ;

/// @brief Method vqmovns_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqmovns_u32(uint32_t  a0) ;

/// @brief Method vqmovun_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovund_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqmovund_s64(int64_t  a0) ;

/// @brief Method vqmovunh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqmovunh_s16(int16_t  a0) ;

/// @brief Method vqmovuns_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqmovuns_s32(int32_t  a0) ;

/// @brief Method vqneg_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqnegb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqnegb_s8(int8_t  a0) ;

/// @brief Method vqnegd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqnegd_s64(int64_t  a0) ;

/// @brief Method vqnegh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqnegh_s16(int16_t  a0) ;

/// @brief Method vqnegq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqnegs_s32(int32_t  a0) ;

/// @brief Method vqrdmlah_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlah_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlahh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlahq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahs_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmlsh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlsh_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlshh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlshq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshs_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqrdmulh_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqrdmulh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulh_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulhh_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrdmulhq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhs_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_laneq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshlb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqrshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqrshlb_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqrshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqrshld_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqrshld_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqrshlh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqrshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshls_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqrshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrn_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqrshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqrshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqrshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqrshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqrshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqrshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrun_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrund_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqrshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrunh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqrshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshruns_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqrshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s16, addr 0x181e91990, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s32, addr 0x181e919c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s64, addr 0x181e919f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s8, addr 0x181e91a30, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u16, addr 0x181e91990, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u32, addr 0x181e919c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u64, addr 0x181e919f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u8, addr 0x181e91a30, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshlb_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqshlb_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqshlb_n_u8(uint8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqshlb_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqshld_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqshld_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqshlh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqshlh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqshlh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqshlh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqshlq_n_s16, addr 0x181e91a60, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s32, addr 0x181e91ab0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s64, addr 0x181e91b00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s8, addr 0x181e91b50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u16, addr 0x181e91a60, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u32, addr 0x181e91ab0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u64, addr 0x181e91b00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u8, addr 0x181e91b50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshls_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqshls_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqshls_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlub_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqshlub_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlud_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqshlud_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshluh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqshluh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlus_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqshlus_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrn_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshrun_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrund_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrunh_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshruns_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsub_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsubb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vqsubb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqsubb_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vqsubb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqsubd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vqsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqsubd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vqsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqsubh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vqsubh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqsubh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vqsubh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqsubq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubs_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vqsubs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsubs_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vqsubs_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqtbl1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1_u8, addr 0x181e91ba0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbl1q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbx1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1_u8, addr 0x181e91bc0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqtbx1q_u8, addr 0x181e91640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u16, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u32, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u64, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u16, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u32, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u64, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrbit_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbit_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbitq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrbitq_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpe_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecped_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vrecped_f64(double_t  a0) ;

/// @brief Method vrecpeq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpes_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrecpes_f32(float_t  a0) ;

/// @brief Method vrecps_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecps_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecpsd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vrecpsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrecpsq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpsq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpss_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrecpss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrecpxd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vrecpxd_f64(double_t  a0) ;

/// @brief Method vrecpxs_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrecpxs_f32(float_t  a0) ;

/// @brief Method vrev16_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev16q_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64_f32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u16, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u32, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u8, addr 0x1809d0930, size 0xcb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64q_f32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u16, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u32, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u8, addr 0x181e91680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrhadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrnd_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndaq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndaq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndi_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndi_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndiq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndiq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndm_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndm_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndmq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndmq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndn_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndn_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndnq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndnq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndns_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrndns_f32(float_t  a0) ;

/// @brief Method vrndp_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndp_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndpq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndpq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndx_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndx_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndxq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndxq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrshl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshld_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vrshld_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vrshlq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshr_n_s16, addr 0x181e91be0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s32, addr 0x181e91c20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s64, addr 0x181e91c60, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s8, addr 0x181e91ca0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u16, addr 0x181e91be0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u32, addr 0x181e91c20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u64, addr 0x181e91c60, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u8, addr 0x181e91ca0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vrshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vrshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vrshrn_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s16, addr 0x181e91ce0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s32, addr 0x181e91d40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s64, addr 0x181e91d90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s8, addr 0x181e91de0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u16, addr 0x181e91ce0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u32, addr 0x181e91d40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u64, addr 0x181e91d90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u8, addr 0x181e91de0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrsqrte_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrted_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vrsqrted_f64(double_t  a0) ;

/// @brief Method vrsqrteq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrtes_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrsqrtes_f32(float_t  a0) ;

/// @brief Method vrsqrts_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrts_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrtsd_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline double_t vrsqrtsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrsqrtsq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtsq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtss_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline float_t vrsqrtss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrsra_n_s16, addr 0x181e91e40, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s32, addr 0x181e91e60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s64, addr 0x181e91e80, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s8, addr 0x181e91ea0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u16, addr 0x181e91e40, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u32, addr 0x181e91e60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u64, addr 0x181e91e80, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u8, addr 0x181e91ea0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vrsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vrsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s16, addr 0x181e91ec0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s32, addr 0x181e91ef0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s64, addr 0x181e91f20, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s8, addr 0x181e91f50, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u16, addr 0x181e91ec0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u32, addr 0x181e91ef0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u64, addr 0x181e91f20, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u8, addr 0x181e91f50, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsubhn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u16, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u32, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u64, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u16, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u32, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u64, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vset_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_f64, addr 0x181e91f80, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s64, addr 0x181e91fb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u64, addr 0x181e91fb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsha1cq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1h_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vsha1h_u32(uint32_t  a0) ;

/// @brief Method vsha1mq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1pq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su0q_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su1q_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256h2q_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256hq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256su0q_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256su1q_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vshl_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshld_n_s64, addr 0x181e91fe0, size 0x10, virtual false, abstract: false, final false
static inline int64_t vshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshld_n_u64, addr 0x181e91fe0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t vshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshld_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vshld_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vshll_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshr_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshrd_n_s64, addr 0x181e91ff0, size 0x10, virtual false, abstract: false, final false
static inline int64_t vshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshrd_n_u64, addr 0x181e92000, size 0x10, virtual false, abstract: false, final false
static inline uint64_t vshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshrn_high_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vsli_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vslid_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vslid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vslid_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vslid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsqadd_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqaddb_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint8_t vsqaddb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vsqaddd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vsqaddd_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vsqaddh_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint16_t vsqaddh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vsqaddq_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqadds_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t vsqadds_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vsqrt_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrt_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrtq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsqrtq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsra_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrad_n_s64, addr 0x181e92010, size 0x20, virtual false, abstract: false, final false
static inline int64_t vsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrad_n_u64, addr 0x181e92030, size 0x20, virtual false, abstract: false, final false
static inline uint64_t vsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsri_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrid_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vsrid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrid_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vsrid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vst1_f32, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_f64, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s16, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s32, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s64, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s8, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u16, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u32, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u64, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u8, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
static inline void vst1_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1q_f32, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_f64, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s16, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s32, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s64, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s8, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u16, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u32, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u64, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u8, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
static inline void vst1q_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsub_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vsubd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vsubhn_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u16, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u32, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u64, addr 0x181e91590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u16, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u32, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u64, addr 0x181e915d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubq_f32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_f64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbx1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtbx1_u8, addr 0x181e91630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtrn1_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtst_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u64, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtstd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vtstd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vtstd_u64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline uint64_t vtstd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vtstq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadd_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqaddb_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int8_t vuqaddb_s8(int8_t  a0, uint8_t  a1) ;

/// @brief Method vuqaddd_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int64_t vuqaddd_s64(int64_t  a0, uint64_t  a1) ;

/// @brief Method vuqaddh_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int16_t vuqaddh_s16(int16_t  a0, uint16_t  a1) ;

/// @brief Method vuqaddq_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadds_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline int32_t vuqadds_s32(int32_t  a0, uint32_t  a1) ;

/// @brief Method vuzp1_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2_f32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u16, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u32, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u8, addr 0x181e91580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2q_f32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_f64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s16, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s32, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s64, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s8, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u16, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u32, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u64, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u8, addr 0x181e91600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arm_Neon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arm_Neon(Arm_Neon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arm_Neon(Arm_Neon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm_Neon) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Arm
class CORDL_TYPE Arm : public ::System::Object {
public:
// Declarations
using Neon = ::Unity::Burst::Intrinsics::Arm_Neon;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arm(Arm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arm(Arm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
