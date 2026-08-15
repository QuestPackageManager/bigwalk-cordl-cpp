#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataType_impl.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineData_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataType_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::get_Container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.set_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)(::UnityEngine::Splines::SplineContainer*)>(&::UnityEngine::Splines::EmbeddedSplineData::set_Container)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.get_SplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::get_SplineIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_SplineIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.set_SplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)(int32_t)>(&::UnityEngine::Splines::EmbeddedSplineData::set_SplineIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_SplineIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::EmbeddedSplineDataType (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)(::UnityEngine::Splines::EmbeddedSplineDataType)>(&::UnityEngine::Splines::EmbeddedSplineData::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)(::StringW)>(&::UnityEngine::Splines::EmbeddedSplineData::set_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1821661f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineData::*)(::StringW, ::UnityEngine::Splines::EmbeddedSplineDataType, ::UnityEngine::Splines::SplineContainer*, int32_t)>(&::UnityEngine::Splines::EmbeddedSplineData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182166240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.TryGetSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::EmbeddedSplineData::*)(::by_ref<::UnityEngine::Splines::Spline*>)>(&::UnityEngine::Splines::EmbeddedSplineData::TryGetSpline)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182166150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetSpline", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.TryGetFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::EmbeddedSplineData::*)(::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>)>(&::UnityEngine::Splines::EmbeddedSplineData::TryGetFloatData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetFloatData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.TryGetFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::EmbeddedSplineData::*)(::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>)>(&::UnityEngine::Splines::EmbeddedSplineData::TryGetFloat4Data)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetFloat4Data", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.TryGetIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::EmbeddedSplineData::*)(::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>)>(&::UnityEngine::Splines::EmbeddedSplineData::TryGetIntData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetIntData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.TryGetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::EmbeddedSplineData::*)(::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>)>(&::UnityEngine::Splines::EmbeddedSplineData::TryGetObjectData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182166020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.GetOrCreateFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<float_t>* (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::GetOrCreateFloatData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateFloatData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.GetOrCreateFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::GetOrCreateFloat4Data)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1821657d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateFloat4Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.GetOrCreateIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<int32_t>* (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::GetOrCreateIntData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateIntData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineData.GetOrCreateObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::Splines::EmbeddedSplineData::*)()>(&::UnityEngine::Splines::EmbeddedSplineData::GetOrCreateObjectData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182165b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateObjectData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr void UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Container = value;
}
constexpr int32_t& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_SplineIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineIndex;
}
constexpr int32_t const& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_SplineIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineIndex;
}
constexpr void UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_set_m_SplineIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineIndex = value;
}
constexpr ::UnityEngine::Splines::EmbeddedSplineDataType& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::UnityEngine::Splines::EmbeddedSplineDataType const& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_set_m_Type(::UnityEngine::Splines::EmbeddedSplineDataType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::StringW& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Key;
}
constexpr ::StringW const& UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_get_m_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Key;
}
constexpr void UnityEngine::Splines::EmbeddedSplineData::__cordl_internal_set_m_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Key = value;
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::EmbeddedSplineData::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void UnityEngine::Splines::EmbeddedSplineData::set_Container(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::EmbeddedSplineData::get_SplineIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_SplineIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::EmbeddedSplineData::set_SplineIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_SplineIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Splines::EmbeddedSplineDataType UnityEngine::Splines::EmbeddedSplineData::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::EmbeddedSplineDataType>(this, ___internal_method);
}
inline void UnityEngine::Splines::EmbeddedSplineData::set_Type(::UnityEngine::Splines::EmbeddedSplineDataType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Splines::EmbeddedSplineData::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Splines::EmbeddedSplineData::set_Key(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::EmbeddedSplineData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::EmbeddedSplineData::_ctor(::StringW  key, ::UnityEngine::Splines::EmbeddedSplineDataType  type, ::UnityEngine::Splines::SplineContainer*  container, int32_t  splineIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>(), ::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, type, container, splineIndex);
}
inline bool UnityEngine::Splines::EmbeddedSplineData::TryGetSpline(::by_ref<::UnityEngine::Splines::Spline*>  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetSpline", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline);
}
inline bool UnityEngine::Splines::EmbeddedSplineData::TryGetFloatData(::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetFloatData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool UnityEngine::Splines::EmbeddedSplineData::TryGetFloat4Data(::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetFloat4Data", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool UnityEngine::Splines::EmbeddedSplineData::TryGetIntData(::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetIntData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool UnityEngine::Splines::EmbeddedSplineData::TryGetObjectData(::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::UnityEngine::Splines::SplineData_1<float_t>* UnityEngine::Splines::EmbeddedSplineData::GetOrCreateFloatData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateFloatData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<float_t>*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* UnityEngine::Splines::EmbeddedSplineData::GetOrCreateFloat4Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateFloat4Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineData_1<int32_t>* UnityEngine::Splines::EmbeddedSplineData::GetOrCreateIntData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateIntData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<int32_t>*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* UnityEngine::Splines::EmbeddedSplineData::GetOrCreateObjectData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineData*>(),
                        {"GetOrCreateObjectData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::EmbeddedSplineData* UnityEngine::Splines::EmbeddedSplineData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::EmbeddedSplineData*>());
}
inline ::UnityEngine::Splines::EmbeddedSplineData* UnityEngine::Splines::EmbeddedSplineData::New_ctor(::StringW  key, ::UnityEngine::Splines::EmbeddedSplineDataType  type, ::UnityEngine::Splines::SplineContainer*  container, int32_t  splineIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::EmbeddedSplineData*>(key, type, container, splineIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::EmbeddedSplineData::EmbeddedSplineData()   {
}
