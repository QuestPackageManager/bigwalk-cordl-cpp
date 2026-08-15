#pragma once
// IWYU pragma private; include "UnityEngine/Splines/BezierKnot.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierTangent_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::BezierKnot::*)(::Unity::Mathematics::float3)>(&::UnityEngine::Splines::BezierKnot::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1821628b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::BezierKnot::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::BezierKnot::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182162930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::BezierKnot::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(&::UnityEngine::Splines::BezierKnot::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1821627f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::UnityEngine::Splines::BezierKnot::*)(::Unity::Mathematics::float4x4)>(&::UnityEngine::Splines::BezierKnot::Transform)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x1821620d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"Transform", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (*)(::UnityEngine::Splines::BezierKnot, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::BezierKnot::op_Addition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1821629e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (*)(::UnityEngine::Splines::BezierKnot, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::BezierKnot::op_Subtraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182162a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.BakeTangentDirectionToRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::UnityEngine::Splines::BezierKnot::*)(bool, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::BezierKnot::BakeTangentDirectionToRotation)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x182161640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"BakeTangentDirectionToRotation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::BezierKnot::*)()>(&::UnityEngine::Splines::BezierKnot::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::BezierKnot::*)()>(&::UnityEngine::Splines::BezierKnot::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182161f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Splines::BezierKnot::*)()>(&::UnityEngine::Splines::BezierKnot::ToString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182161fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                    {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::BezierKnot::*)(::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::BezierKnot::Equals)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182161d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::BezierKnot::*)(::System::Object*)>(&::UnityEngine::Splines::BezierKnot::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182161e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                    {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::BezierKnot.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::BezierKnot::*)()>(&::UnityEngine::Splines::BezierKnot::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182161ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                    {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 2}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::BezierKnot::_ctor(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position);
}
inline void UnityEngine::Splines::BezierKnot::_ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangentIn, ::Unity::Mathematics::float3  tangentOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, tangentIn, tangentOut);
}
inline void UnityEngine::Splines::BezierKnot::_ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangentIn, ::Unity::Mathematics::float3  tangentOut, ::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, tangentIn, tangentOut, rotation);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::BezierKnot::Transform(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"Transform", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(*this, ___internal_method, matrix);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::BezierKnot::op_Addition(::UnityEngine::Splines::BezierKnot  knot, ::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, knot, rhs);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::BezierKnot::op_Subtraction(::UnityEngine::Splines::BezierKnot  knot, ::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, knot, rhs);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::BezierKnot::BakeTangentDirectionToRotation(bool  mirrored, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"BakeTangentDirectionToRotation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(*this, ___internal_method, mirrored, main);
}
inline void UnityEngine::Splines::BezierKnot::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Splines::BezierKnot::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Splines::BezierKnot::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Splines::BezierKnot::Equals(::UnityEngine::Splines::BezierKnot  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::BezierKnot>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Splines::BezierKnot::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Splines::BezierKnot::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::BezierKnot>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Splines::BezierKnot::operator ::UnityEngine::ISerializationCallbackReceiver*()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Splines::BezierKnot::i___UnityEngine__ISerializationCallbackReceiver()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::BezierKnot::operator ::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::BezierKnot::i___System__IEquatable_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "TangentIn", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "TangentOut", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::BezierKnot::BezierKnot(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  TangentIn, ::Unity::Mathematics::float3  TangentOut, ::Unity::Mathematics::quaternion  Rotation) noexcept  {
this->Position = Position;
this->TangentIn = TangentIn;
this->TangentOut = TangentOut;
this->Rotation = Rotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::BezierKnot::BezierKnot()   {
}
