#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/UnityEqualityComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__UnityEqualityComparer_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__UnityEqualityComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Cache_1<T>::setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<T>*, "Comparer", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Cache_1<T>*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::IEqualityComparer_1<T>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Cache_1<T>::getStaticF_Comparer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<T>*, "Comparer", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Cache_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Cache_1<T>::UnityEqualityComparer_Cache_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e88d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::*)(::UnityEngine::Vector2)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e88db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::Equals(::UnityEngine::Vector2  self, ::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::GetHashCode(::UnityEngine::Vector2  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Vector2_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2EqualityComparer::UnityEqualityComparer_Vector2EqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e88e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::*)(::UnityEngine::Vector3)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x1fb0;
  constexpr static std::size_t addrs = 0x18098d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::Equals(::UnityEngine::Vector3  self, ::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::GetHashCode(::UnityEngine::Vector3  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Vector3_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3EqualityComparer::UnityEqualityComparer_Vector3EqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::*)(::UnityEngine::Vector4)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18098ce00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::Equals(::UnityEngine::Vector4  self, ::UnityEngine::Vector4  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::GetHashCode(::UnityEngine::Vector4  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Vector4_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector4EqualityComparer::UnityEqualityComparer_Vector4EqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::*)(::UnityEngine::Color)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18098ce00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::Equals(::UnityEngine::Color  self, ::UnityEngine::Color  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, other);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::GetHashCode(::UnityEngine::Color  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Color_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_ColorEqualityComparer::UnityEqualityComparer_ColorEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e7f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::*)(::UnityEngine::Rect)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e7f7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::Equals(::UnityEngine::Rect  self, ::UnityEngine::Rect  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, other);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::GetHashCode(::UnityEngine::Rect  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Rect_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectEqualityComparer::UnityEqualityComparer_RectEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e7c7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::*)(::UnityEngine::Bounds)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e7c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::Equals(::UnityEngine::Bounds  self, ::UnityEngine::Bounds  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::GetHashCode(::UnityEngine::Bounds  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Bounds_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsEqualityComparer::UnityEqualityComparer_BoundsEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::*)(::UnityEngine::Quaternion)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18098ce00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::Equals(::UnityEngine::Quaternion  self, ::UnityEngine::Quaternion  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::GetHashCode(::UnityEngine::Quaternion  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Quaternion_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_QuaternionEqualityComparer::UnityEqualityComparer_QuaternionEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e7cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::*)(::UnityEngine::Color32)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e7cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::Equals(::UnityEngine::Color32  self, ::UnityEngine::Color32  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::GetHashCode(::UnityEngine::Color32  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Color32_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Color32EqualityComparer::UnityEqualityComparer_Color32EqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e88de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::*)(::UnityEngine::Vector2Int)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e88e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::Equals(::UnityEngine::Vector2Int  self, ::UnityEngine::Vector2Int  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::GetHashCode(::UnityEngine::Vector2Int  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Vector2Int_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector2IntEqualityComparer::UnityEqualityComparer_Vector2IntEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e88ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::*)(::UnityEngine::Vector3Int)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e88f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::setStaticF_Default(::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*, "Default", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(std::forward<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*, "Default", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>();
}
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::Equals(::UnityEngine::Vector3Int  self, ::UnityEngine::Vector3Int  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::GetHashCode(::UnityEngine::Vector3Int  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Vector3Int_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer::UnityEqualityComparer_Vector3IntEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::*)(::UnityEngine::RangeInt, ::UnityEngine::RangeInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e7f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::RangeInt>(), ::i2c::type_of<::UnityEngine::RangeInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::*)(::UnityEngine::RangeInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e7f6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::RangeInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::Equals(::UnityEngine::RangeInt  self, ::UnityEngine::RangeInt  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::RangeInt>(), ::i2c::type_of<::UnityEngine::RangeInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::GetHashCode(::UnityEngine::RangeInt  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::RangeInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__RangeInt_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RangeIntEqualityComparer::UnityEqualityComparer_RangeIntEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::*)(::UnityEngine::RectInt, ::UnityEngine::RectInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e7f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::*)(::UnityEngine::RectInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e7f900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::Equals(::UnityEngine::RectInt  self, ::UnityEngine::RectInt  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, other);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::GetHashCode(::UnityEngine::RectInt  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__RectInt_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_RectIntEqualityComparer::UnityEqualityComparer_RectIntEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::*)(::UnityEngine::BoundsInt, ::UnityEngine::BoundsInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181e7c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::*)(::UnityEngine::BoundsInt)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181e7ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::Equals(::UnityEngine::BoundsInt  self, ::UnityEngine::BoundsInt  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, self, vector);
}
inline int32_t Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::GetHashCode(::UnityEngine::BoundsInt  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>"
constexpr  Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__BoundsInt_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_BoundsIntEqualityComparer::UnityEqualityComparer_BoundsIntEqualityComparer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer.GetDefaultHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::GetDefaultHelper)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181e872c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(),
                        {"GetDefaultHelper", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Vector2(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*, "Vector2", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Vector2()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>*, "Vector2", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Vector3(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*, "Vector3", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Vector3()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>*, "Vector3", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Vector4(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*, "Vector4", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Vector4()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>*, "Vector4", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Color(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*, "Color", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Color()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>*, "Color", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Color32(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*, "Color32", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Color32()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>*, "Color32", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Rect(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*, "Rect", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Rect()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>*, "Rect", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Bounds(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*, "Bounds", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Bounds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>*, "Bounds", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Quaternion(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*, "Quaternion", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Quaternion()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>*, "Quaternion", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_vector2Type(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "vector2Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_vector2Type()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "vector2Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_vector3Type(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "vector3Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_vector3Type()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "vector3Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_vector4Type(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "vector4Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_vector4Type()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "vector4Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_colorType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "colorType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_colorType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "colorType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_color32Type(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "color32Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_color32Type()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "color32Type", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_rectType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "rectType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_rectType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "rectType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_boundsType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "boundsType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_boundsType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "boundsType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_quaternionType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "quaternionType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_quaternionType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "quaternionType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Vector2Int(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*, "Vector2Int", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Vector2Int()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>*, "Vector2Int", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_Vector3Int(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*, "Vector3Int", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_Vector3Int()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>*, "Vector3Int", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_RangeInt(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*, "RangeInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_RangeInt()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>*, "RangeInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_RectInt(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*, "RectInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_RectInt()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>*, "RectInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_BoundsInt(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*, "BoundsInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_BoundsInt()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>*, "BoundsInt", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_vector2IntType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "vector2IntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_vector2IntType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "vector2IntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_vector3IntType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "vector3IntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_vector3IntType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "vector3IntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_rangeIntType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "rangeIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_rangeIntType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "rangeIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_rectIntType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "rectIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_rectIntType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "rectIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
inline void Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::setStaticF_boundsIntType(::System::RuntimeTypeHandle  value)  {
::cordl_internals::setStaticField<::System::RuntimeTypeHandle, "boundsIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(std::forward<::System::RuntimeTypeHandle>(value));
}
inline ::System::RuntimeTypeHandle Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::getStaticF_boundsIntType()  {
return ::cordl_internals::getStaticField<::System::RuntimeTypeHandle, "boundsIntType", ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>();
}
template<typename T>
inline ::System::Collections::Generic::IEqualityComparer_1<T>* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::GetDefault()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(),
                    {"GetDefault", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<T>*>(nullptr, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::GetDefaultHelper(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer*>(),
                        {"GetDefaultHelper", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer::UnityEqualityComparer()   {
}
