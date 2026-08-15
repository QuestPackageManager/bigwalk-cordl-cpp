#pragma once
// IWYU pragma private; include "GlobalNamespace/hiHYIcoyXejyQbLzUJWImSHUtPzT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(hiHYIcoyXejyQbLzUJWImSHUtPzT)
namespace GlobalNamespace {
class hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe;
}
namespace GlobalNamespace {
struct hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData;
}
namespace GlobalNamespace {
class hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo;
}
namespace GlobalNamespace {
class nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
namespace Rewired::Utils::Classes::Data {
template<typename T>
class RingBuffer_1;
}
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ObjectPool_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class hiHYIcoyXejyQbLzUJWImSHUtPzT;
}
namespace GlobalNamespace {
class hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe;
}
namespace GlobalNamespace {
class hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo;
}
namespace GlobalNamespace {
struct hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*);
MARK_REF_T(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*);
MARK_REF_T(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*);
MARK_VAL_T(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*, "", "hiHYIcoyXejyQbLzUJWImSHUtPzT");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*, "", "hiHYIcoyXejyQbLzUJWImSHUtPzT/KkjYIEMhvLWSXazITtslaQvvNbHe");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*, "", "hiHYIcoyXejyQbLzUJWImSHUtPzT/TouchpadInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, "", "hiHYIcoyXejyQbLzUJWImSHUtPzT/TouchData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: hiHYIcoyXejyQbLzUJWImSHUtPzT/TouchpadInfo
class CORDL_TYPE hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo : public ::System::Object {
public:
// Declarations
/// @brief Field invertY, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertY, put=__cordl_internal_set_invertY)) bool  invertY;

/// @brief Field maxTouches, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTouches, put=__cordl_internal_set_maxTouches)) int32_t  maxTouches;

/// @brief Field maxX, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxX, put=__cordl_internal_set_maxX)) int32_t  maxX;

/// @brief Field maxY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxY, put=__cordl_internal_set_maxY)) int32_t  maxY;

/// @brief Field minX, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_minX, put=__cordl_internal_set_minX)) int32_t  minX;

/// @brief Field minY, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minY, put=__cordl_internal_set_minY)) int32_t  minY;

/// @brief Field reverseY, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseY, put=__cordl_internal_set_reverseY)) bool  reverseY;

/// @brief Method CalculateTouch, addr 0x181ab92a0, size 0x100, virtual false, abstract: false, final false
inline void CalculateTouch(::by_ref<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  data) ;

static inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

constexpr bool const& __cordl_internal_get_invertY() const;

constexpr bool& __cordl_internal_get_invertY() ;

constexpr int32_t const& __cordl_internal_get_maxTouches() const;

constexpr int32_t& __cordl_internal_get_maxTouches() ;

constexpr int32_t const& __cordl_internal_get_maxX() const;

constexpr int32_t& __cordl_internal_get_maxX() ;

constexpr int32_t const& __cordl_internal_get_maxY() const;

constexpr int32_t& __cordl_internal_get_maxY() ;

constexpr int32_t const& __cordl_internal_get_minX() const;

constexpr int32_t& __cordl_internal_get_minX() ;

constexpr int32_t const& __cordl_internal_get_minY() const;

constexpr int32_t& __cordl_internal_get_minY() ;

constexpr bool const& __cordl_internal_get_reverseY() const;

constexpr bool& __cordl_internal_get_reverseY() ;

constexpr void __cordl_internal_set_invertY(bool  value) ;

constexpr void __cordl_internal_set_maxTouches(int32_t  value) ;

constexpr void __cordl_internal_set_maxX(int32_t  value) ;

constexpr void __cordl_internal_set_maxY(int32_t  value) ;

constexpr void __cordl_internal_set_minX(int32_t  value) ;

constexpr void __cordl_internal_set_minY(int32_t  value) ;

constexpr void __cordl_internal_set_reverseY(bool  value) ;

/// @brief Method .ctor, addr 0x181ab93a0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo(hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo(hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6583};

/// @brief Field maxTouches, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxTouches;

/// @brief Field minX, offset: 0x14, size: 0x4, def value: None
 int32_t  ___minX;

/// @brief Field maxX, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maxX;

/// @brief Field minY, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___minY;

/// @brief Field maxY, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxY;

/// @brief Field invertY, offset: 0x24, size: 0x1, def value: None
 bool  ___invertY;

/// @brief Field reverseY, offset: 0x25, size: 0x1, def value: None
 bool  ___reverseY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___maxTouches) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___minX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___maxX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___minY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___maxY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___invertY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo, ___reverseY) == 0x25, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: hiHYIcoyXejyQbLzUJWImSHUtPzT/TouchData
struct CORDL_TYPE hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData {
public:
// Declarations
/// @brief Method Clear, addr 0x181ab91f0, size 0xb0, virtual false, abstract: false, final false
inline void Clear() ;

// Ctor Parameters []
// @brief default ctor
constexpr hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData() ;

// Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeStamp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isTouching", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "positionRawX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positionRawY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positionX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "positionY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "positionAbsX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positionAbsY", ty: "int32_t", modifiers: "", def_value: None }]
constexpr hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData(int32_t  touchId, float_t  timeStamp, bool  isTouching, int32_t  positionRawX, int32_t  positionRawY, float_t  positionX, float_t  positionY, int32_t  positionAbsX, int32_t  positionAbsY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field touchId, offset: 0x0, size: 0x4, def value: None
 int32_t  touchId;

/// @brief Field timeStamp, offset: 0x4, size: 0x4, def value: None
 float_t  timeStamp;

/// @brief Field isTouching, offset: 0x8, size: 0x1, def value: None
 bool  isTouching;

/// @brief Field positionRawX, offset: 0xc, size: 0x4, def value: None
 int32_t  positionRawX;

/// @brief Field positionRawY, offset: 0x10, size: 0x4, def value: None
 int32_t  positionRawY;

/// @brief Field positionX, offset: 0x14, size: 0x4, def value: None
 float_t  positionX;

/// @brief Field positionY, offset: 0x18, size: 0x4, def value: None
 float_t  positionY;

/// @brief Field positionAbsX, offset: 0x1c, size: 0x4, def value: None
 int32_t  positionAbsX;

/// @brief Field positionAbsY, offset: 0x20, size: 0x4, def value: None
 int32_t  positionAbsY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, touchId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, timeStamp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, isTouching) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionRawX) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionRawY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionAbsX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData, positionAbsY) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, hiHYIcoyXejyQbLzUJWImSHUtPzT::TouchData
namespace GlobalNamespace {
// Is value type: false
// CS Name: hiHYIcoyXejyQbLzUJWImSHUtPzT/KkjYIEMhvLWSXazITtslaQvvNbHe
class CORDL_TYPE hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe : public ::System::Object {
public:
// Declarations
/// @brief Field TtqLochiAxjmYCGNmCcJDXcfIhykc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TtqLochiAxjmYCGNmCcJDXcfIhykc, put=__cordl_internal_set_TtqLochiAxjmYCGNmCcJDXcfIhykc)) ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  TtqLochiAxjmYCGNmCcJDXcfIhykc;

static inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& __cordl_internal_get_TtqLochiAxjmYCGNmCcJDXcfIhykc() const;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& __cordl_internal_get_TtqLochiAxjmYCGNmCcJDXcfIhykc() ;

constexpr void __cordl_internal_set_TtqLochiAxjmYCGNmCcJDXcfIhykc(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value) ;

/// @brief Method .ctor, addr 0x181ab5b70, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe(hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe(hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6584};

/// @brief Field TtqLochiAxjmYCGNmCcJDXcfIhykc, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  ___TtqLochiAxjmYCGNmCcJDXcfIhykc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe, ___TtqLochiAxjmYCGNmCcJDXcfIhykc) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies hiHYIcoyXejyQbLzUJWImSHUtPzT::TouchData, nxSccnjzMkUjLoMzgjhhzPVcPAxF
namespace GlobalNamespace {
// Is value type: false
// CS Name: hiHYIcoyXejyQbLzUJWImSHUtPzT
class CORDL_TYPE hiHYIcoyXejyQbLzUJWImSHUtPzT : public ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF {
public:
// Declarations
using KkjYIEMhvLWSXazITtslaQvvNbHe = ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe;

using TouchData = ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData;

using TouchpadInfo = ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo;

/// @brief Field BvISMIWiwGHJvCsiKeGiYlIzaWjZ, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BvISMIWiwGHJvCsiKeGiYlIzaWjZ, put=__cordl_internal_set_BvISMIWiwGHJvCsiKeGiYlIzaWjZ)) ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  BvISMIWiwGHJvCsiKeGiYlIzaWjZ;

/// @brief Field TFvDlBFEIKZBNHMGpUuZJIoPEtfK, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TFvDlBFEIKZBNHMGpUuZJIoPEtfK, put=__cordl_internal_set_TFvDlBFEIKZBNHMGpUuZJIoPEtfK)) ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  TFvDlBFEIKZBNHMGpUuZJIoPEtfK;

/// @brief Field WfHzBLkfpDBhpsJNfGTdkWTTuREh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WfHzBLkfpDBhpsJNfGTdkWTTuREh, put=__cordl_internal_set_WfHzBLkfpDBhpsJNfGTdkWTTuREh)) ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  WfHzBLkfpDBhpsJNfGTdkWTTuREh;

/// @brief Field mKZFqMYzoATFBpnSLAPXYvhBgRey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mKZFqMYzoATFBpnSLAPXYvhBgRey, put=__cordl_internal_set_mKZFqMYzoATFBpnSLAPXYvhBgRey)) ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  mKZFqMYzoATFBpnSLAPXYvhBgRey;

/// @brief Field pzXUvJBjYSyFeuptiIHAjNeSXMQA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pzXUvJBjYSyFeuptiIHAjNeSXMQA, put=__cordl_internal_set_pzXUvJBjYSyFeuptiIHAjNeSXMQA)) ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  pzXUvJBjYSyFeuptiIHAjNeSXMQA;

/// @brief Field qghCRZrxflbfOukOiVkFHILirqPC, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_qghCRZrxflbfOukOiVkFHILirqPC, put=__cordl_internal_set_qghCRZrxflbfOukOiVkFHILirqPC)) ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  qghCRZrxflbfOukOiVkFHILirqPC;

static inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT* New_ctor(uint8_t  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method OFIiDcepaxSqPPNwhLRzqdMSuGgk, addr 0x181aa3b70, size 0x1b0, virtual true, abstract: false, final false
inline void OFIiDcepaxSqPPNwhLRzqdMSuGgk(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& __cordl_internal_get_BvISMIWiwGHJvCsiKeGiYlIzaWjZ() const;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& __cordl_internal_get_BvISMIWiwGHJvCsiKeGiYlIzaWjZ() ;

constexpr ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>* const& __cordl_internal_get_TFvDlBFEIKZBNHMGpUuZJIoPEtfK() const;

constexpr ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*& __cordl_internal_get_TFvDlBFEIKZBNHMGpUuZJIoPEtfK() ;

constexpr ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>* const& __cordl_internal_get_WfHzBLkfpDBhpsJNfGTdkWTTuREh() const;

constexpr ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*& __cordl_internal_get_WfHzBLkfpDBhpsJNfGTdkWTTuREh() ;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& __cordl_internal_get_mKZFqMYzoATFBpnSLAPXYvhBgRey() const;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& __cordl_internal_get_mKZFqMYzoATFBpnSLAPXYvhBgRey() ;

constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo* const& __cordl_internal_get_pzXUvJBjYSyFeuptiIHAjNeSXMQA() const;

constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*& __cordl_internal_get_pzXUvJBjYSyFeuptiIHAjNeSXMQA() ;

constexpr ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>* const& __cordl_internal_get_qghCRZrxflbfOukOiVkFHILirqPC() const;

constexpr ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*& __cordl_internal_get_qghCRZrxflbfOukOiVkFHILirqPC() ;

constexpr void __cordl_internal_set_BvISMIWiwGHJvCsiKeGiYlIzaWjZ(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value) ;

constexpr void __cordl_internal_set_TFvDlBFEIKZBNHMGpUuZJIoPEtfK(::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  value) ;

constexpr void __cordl_internal_set_WfHzBLkfpDBhpsJNfGTdkWTTuREh(::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  value) ;

constexpr void __cordl_internal_set_mKZFqMYzoATFBpnSLAPXYvhBgRey(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value) ;

constexpr void __cordl_internal_set_pzXUvJBjYSyFeuptiIHAjNeSXMQA(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  value) ;

constexpr void __cordl_internal_set_qghCRZrxflbfOukOiVkFHILirqPC(::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  value) ;

/// @brief Method .ctor, addr 0x181aa3d20, size 0x190, virtual false, abstract: false, final false
inline void _ctor(uint8_t  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method gDpAFgjhIqytZijJMIVdgqLZFCJp, addr 0x181aa3eb0, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe* gDpAFgjhIqytZijJMIVdgqLZFCJp() ;

/// @brief Method pJJnqZHVjOBZhkaWiayUDRHHmNib, addr 0x181aa3f00, size 0x240, virtual false, abstract: false, final false
inline void pJJnqZHVjOBZhkaWiayUDRHHmNib() ;

/// @brief Method zXwqlkyleJMWIQjDfePHIPIdXiac, addr 0x181aa4140, size 0x60, virtual false, abstract: false, final false
inline bool zXwqlkyleJMWIQjDfePHIPIdXiac(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr hiHYIcoyXejyQbLzUJWImSHUtPzT() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
hiHYIcoyXejyQbLzUJWImSHUtPzT(hiHYIcoyXejyQbLzUJWImSHUtPzT && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "hiHYIcoyXejyQbLzUJWImSHUtPzT", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
hiHYIcoyXejyQbLzUJWImSHUtPzT(hiHYIcoyXejyQbLzUJWImSHUtPzT const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6586};

/// @brief Field pzXUvJBjYSyFeuptiIHAjNeSXMQA, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  ___pzXUvJBjYSyFeuptiIHAjNeSXMQA;

/// @brief Field TFvDlBFEIKZBNHMGpUuZJIoPEtfK, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  ___TFvDlBFEIKZBNHMGpUuZJIoPEtfK;

/// @brief Field BvISMIWiwGHJvCsiKeGiYlIzaWjZ, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  ___BvISMIWiwGHJvCsiKeGiYlIzaWjZ;

/// @brief Field WfHzBLkfpDBhpsJNfGTdkWTTuREh, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  ___WfHzBLkfpDBhpsJNfGTdkWTTuREh;

/// @brief Field mKZFqMYzoATFBpnSLAPXYvhBgRey, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  ___mKZFqMYzoATFBpnSLAPXYvhBgRey;

/// @brief Field qghCRZrxflbfOukOiVkFHILirqPC, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  ___qghCRZrxflbfOukOiVkFHILirqPC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___pzXUvJBjYSyFeuptiIHAjNeSXMQA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___TFvDlBFEIKZBNHMGpUuZJIoPEtfK) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___BvISMIWiwGHJvCsiKeGiYlIzaWjZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___WfHzBLkfpDBhpsJNfGTdkWTTuREh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___mKZFqMYzoATFBpnSLAPXYvhBgRey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT, ___qghCRZrxflbfOukOiVkFHILirqPC) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
