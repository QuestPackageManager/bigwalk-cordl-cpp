#pragma once
// IWYU pragma private; include "MA/Flora/AABBMinMax.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "MA/Flora/zzzz__AABBMinMax_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::MA::Flora::AABBMinMax.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABBMinMax (*)()>(&::MA::Flora::AABBMinMax::get_Empty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e2020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AABBMinMax::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AABBMinMax::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AABBMinMax::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::MA::Flora::AABBMinMax::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180673c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABBMinMax::*)()>(&::MA::Flora::AABBMinMax::IsEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d93e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.ToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::AABBMinMax::*)()>(&::MA::Flora::AABBMinMax::ToBounds)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814648b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"ToBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.ToBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AABBMinMax::*)()>(&::MA::Flora::AABBMinMax::ToBox)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d9410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"ToBox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABBMinMax::*)(::MA::Flora::AABBMinMax)>(&::MA::Flora::AABBMinMax::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180673a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABBMinMax::*)(::System::Object*)>(&::MA::Flora::AABBMinMax::Equals)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180673b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                    {::i2c::class_of<::MA::Flora::AABBMinMax>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::AABBMinMax::*)()>(&::MA::Flora::AABBMinMax::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814d92c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                    {::i2c::class_of<::MA::Flora::AABBMinMax>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::AABBMinMax::*)()>(&::MA::Flora::AABBMinMax::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814d9450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                    {::i2c::class_of<::MA::Flora::AABBMinMax>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.op_Implicit___MA__Flora__AABBMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABBMinMax (*)(::MA::Flora::AABB)>(&::MA::Flora::AABBMinMax::op_Implicit___MA__Flora__AABBMinMax)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e2110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.op_Implicit___MA__Flora__AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (*)(::MA::Flora::AABBMinMax)>(&::MA::Flora::AABBMinMax::op_Implicit___MA__Flora__AABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e2170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABBMinMax.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABBMinMax (*)(::MA::Flora::AABBMinMax, ::MA::Flora::AABBMinMax)>(&::MA::Flora::AABBMinMax::op_Addition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e2080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>(), ::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::AABBMinMax MA::Flora::AABBMinMax::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABBMinMax>(nullptr, ___internal_method);
}
inline void MA::Flora::AABBMinMax::_ctor(::Unity::Mathematics::float3  min, ::Unity::Mathematics::float3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void MA::Flora::AABBMinMax::_ctor(::Unity::Mathematics::float4  min, ::Unity::Mathematics::float4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline bool MA::Flora::AABBMinMax::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Bounds MA::Flora::AABBMinMax::ToBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"ToBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AABBMinMax::ToBox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"ToBox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method);
}
inline bool MA::Flora::AABBMinMax::Equals(::MA::Flora::AABBMinMax  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::AABBMinMax::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABBMinMax>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::AABBMinMax::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABBMinMax>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::AABBMinMax::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABBMinMax>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::MA::Flora::AABBMinMax MA::Flora::AABBMinMax::op_Implicit___MA__Flora__AABBMinMax(::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABBMinMax>(nullptr, ___internal_method, aabb);
}
inline ::MA::Flora::AABB MA::Flora::AABBMinMax::op_Implicit___MA__Flora__AABB(::MA::Flora::AABBMinMax  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(nullptr, ___internal_method, aabb);
}
inline ::MA::Flora::AABBMinMax MA::Flora::AABBMinMax::op_Addition(::MA::Flora::AABBMinMax  a, ::MA::Flora::AABBMinMax  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABBMinMax>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AABBMinMax>(), ::i2c::type_of<::MA::Flora::AABBMinMax>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABBMinMax>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AABBMinMax>"
constexpr  MA::Flora::AABBMinMax::operator ::System::IEquatable_1<::MA::Flora::AABBMinMax>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AABBMinMax>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AABBMinMax>"
constexpr ::System::IEquatable_1<::MA::Flora::AABBMinMax>* MA::Flora::AABBMinMax::i___System__IEquatable_1___MA__Flora__AABBMinMax_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AABBMinMax>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Max", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::AABBMinMax::AABBMinMax(::Unity::Mathematics::float4  Min, ::Unity::Mathematics::float4  Max) noexcept  {
this->Min = Min;
this->Max = Max;
}
// Ctor Parameters []
constexpr ::MA::Flora::AABBMinMax::AABBMinMax()   {
}
