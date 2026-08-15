#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeywordSpace.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetKeywordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(&::UnityEngine::Rendering::LocalKeywordSpace::GetKeywordCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822ac800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeywordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::UnityEngine::Rendering::LocalKeywordSpace::*)(::StringW)>(&::UnityEngine::Rendering::LocalKeywordSpace::GetKeyword)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1822ac830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.get_keywordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(&::UnityEngine::Rendering::LocalKeywordSpace::get_keywordCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822ac800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"get_keywordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.FindKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (::UnityEngine::Rendering::LocalKeywordSpace::*)(::StringW)>(&::UnityEngine::Rendering::LocalKeywordSpace::FindKeyword)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822ac7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"FindKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::System::Object*)>(&::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822ac740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                    {::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::UnityEngine::Rendering::LocalKeywordSpace)>(&::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::LocalKeywordSpace, ::UnityEngine::Rendering::LocalKeywordSpace)>(&::UnityEngine::Rendering::LocalKeywordSpace::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(&::UnityEngine::Rendering::LocalKeywordSpace::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                    {::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetKeyword_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::LocalKeywordSpace::GetKeyword_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ac820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeyword_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::LocalKeywordSpace::GetKeywordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeywordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::LocalKeywordSpace::GetKeyword(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(*this, ___internal_method, name);
}
inline uint32_t UnityEngine::Rendering::LocalKeywordSpace::get_keywordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"get_keywordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::LocalKeywordSpace::FindKeyword(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"FindKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(*this, ___internal_method, name);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::UnityEngine::Rendering::LocalKeywordSpace  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::op_Equality(::UnityEngine::Rendering::LocalKeywordSpace  lhs, ::UnityEngine::Rendering::LocalKeywordSpace  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::Rendering::LocalKeywordSpace::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LocalKeywordSpace::GetKeyword_Injected(::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                        {"GetKeyword_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr  UnityEngine::Rendering::LocalKeywordSpace::operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>* UnityEngine::Rendering::LocalKeywordSpace::i___System__IEquatable_1___UnityEngine__Rendering__LocalKeywordSpace_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace(::System::IntPtr  m_KeywordSpace) noexcept  {
this->m_KeywordSpace = m_KeywordSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace()   {
}
